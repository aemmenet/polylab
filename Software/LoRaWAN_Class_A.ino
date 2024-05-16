/***********************************************************************/
/* Please see README page on https://github.com/SylvainMontagny/LoRaE5 */
/***********************************************************************/

#include <Arduino.h>
#include "lorae5.h"
#include "config_application.h"
#include "config_board.h"

// Add I2C library
// #include <Wire.h> // is loaded by I2C Sensor Library

// Add Sensor BME280 library
#include <Seeed_BME280.h>
int temperature, humidity;
long pressure;
// create sensor instance
BME280 bme280;



uint8_t sizePayloadUp = 8;
uint8_t sizePayloadDown = 1;

uint8_t payloadUp[20] = { 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07 };
uint8_t payloadDown[20] = { 0 };

LORAE5 lorae5(devEUI, appEUI, appKey, devAddr, nwkSKey, appSKey);

void setup() {

  // Initialze Bosch BME280 sensor
  if (!bme280.init()) {
    Debug_Serial.println("Device error!");
  }

  lorae5.setup_hardware(&Debug_Serial, &LoRa_Serial);
  lorae5.setup_lorawan(REGION, ACTIVATION_MODE, CLASS, SPREADING_FACTOR, ADAPTIVE_DR, CONFIRMED, PORT_UP, SEND_BY_PUSH_BUTTON, FRAME_DELAY);
  lorae5.printInfo();

  if (ACTIVATION_MODE == OTAA) {
    Debug_Serial.println("Join Procedure in progress...");
    while (lorae5.join() == false)
      ;
    delay(2000);
  }
}

void loop() {

  // Read BME280 Sensor Data for sending up
  temperature = bme280.getTemperature() * 100;
  humidity = bme280.getHumidity();
  pressure = bme280.getPressure();

  // Show BME280 sensor data on serial monitor
  Debug_Serial.print("Temperature = ");
  Debug_Serial.print(temperature / 100.0);
  Debug_Serial.println(" °C");

  Debug_Serial.print("Humidity = ");
  Debug_Serial.print(humidity);
  Debug_Serial.println(" %");

  Debug_Serial.print("Pressure = ");
  Debug_Serial.print(pressure / 100);
  Debug_Serial.println(" mbar");
  Debug_Serial.println();

  

  // Copy BME280 sensor data in Payload array
  payloadUp[0] = highByte(temperature);
  payloadUp[1] = lowByte(temperature);

  payloadUp[2] = highByte(humidity);
  payloadUp[3] = lowByte(humidity);

  payloadUp[4] = (byte)((pressure & 0xFF000000) >> 24);
  payloadUp[5] = (byte)((pressure & 0x00FF0000) >> 16);
  payloadUp[6] = (byte)((pressure & 0x0000FF00) >> 8);
  payloadUp[7] = (byte)((pressure & 0X000000FF));

  // Send data
  lorae5.sendData(payloadUp, sizePayloadUp);

  // Check downlink on RX1-RX2 and call processDownlink()
  if (lorae5.awaitForDownlinkClass_A(payloadDown, &sizePayloadDown) == RET_DOWNLINK) {
    processDownlink();
  };

  // Switch LED_BUILTIN according to PayloadDown value (0x00/0x01)
  if (sizePayloadDown > 0) {
    if (payloadDown[0] < 0x01) {
      digitalWrite(LED_BUILTIN, LOW);
    } else digitalWrite(LED_BUILTIN, HIGH);
  }

  // Wait in Low Power mode
  lorae5.sleep();
}

void processDownlink() {
  // You have received "sizePayloadDown" bytes stored in the table "payloadDown"
}

/*------------------------------------------------------------------
Uplink Payload Formatter:

function Decoder(bytes, port) {
  var temperature = bytes[0]<<24>>16 | bytes[1];
  var humidity = (bytes[2] << 8) | bytes[3];
  var pressure = ((bytes[4]) << 24) + ((bytes[5]) << 16) + ((bytes[6]) << 8) + ((bytes[7]));
  
  return {
    temperature: temperature / 100,
    humidity: humidity,
    pressure: pressure / 100,
  }
}

------------------------------------------------------------------*/
