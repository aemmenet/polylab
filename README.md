## "polylab" DIY Microchip AVR® Dx32-Series Board

### Hardware:

<img src="Images/IMG_3741_20.jpg" alt="polylab" width="50%">

- 2 layer PCB made with KiCAD 7 EDA.
- KiCAD learned with https://www.udemy.com/course/kicad-like-a-pro-3e/
- PCB manufactured by: https://aisler.net/
- proprietary form factor: 1/2 credit card size ( 53.98 x 42.8 mm)  
- 2 x 19 pin pinheader with proprietary "polylab" pinout

### MCU:

<img src="Images/Microchip.jpg" alt="polylab" width="13%">

Microchip AVR64DD32 (QFP32 socket). Replacement or successor for the old ATmega328P?
* [8-bit MCUs: Still Thriving After 50 Years](https://www.microchip.com/en-us/about/media-center/blog/2023/the-8-bit-microcontroller-is-still-thriving?utm_campaign=8bit-mcus-embedded-design&utm_source=twitter.com&utm_medium=Post&utm_content=SharePoint45090.75)
* [AVR® DD Product Family Overview](https://www.youtube.com/watch?v=M-myqg-2c5s)
* [AVR Peripheral Deep Dive](https://mu.microchip.com/avr-peripheral-deep-dive-pub?utm_campaign=mcu8-avr-microchip-university&utm_source=twitter.com&utm_medium=Post&utm_content=SharePoint45169.5833)
* https://www.arduino.cc/en/software Arduino IDE
* https://github.com/SpenceKonde/DxCore Arduino support for the AVR DA, DB-series and DD-series
* [SerialUPDI programmer](https://www.tindie.com/products/mcudude/serialupdi-programmer) Flashing Optiboot bootloader ok with the above versions

<img src="Images/IMG_3732_20.jpg" alt="polylab" width="50%">

Flashing Optiboot Bootloader via UPDI Target Header.

### mikroBUS™:

<img src="Images/IMG_3666_20.jpg" alt="polylab" width="50%">

* https://www.mikroe.com/mikrobus
* https://www.mikroe.com/click
* [Sensirion & mikroBUS™](https://developer.sensirion.com/partner-spotlight/partner-spotlight-mikroelektronika) , [ETHzürich & mikroBUS™](https://pbl.ee.ethz.ch/education/embedded-systems.html) , [Microchip & mikroBUS™](http://ww1.microchip.com/downloads/en/DeviceDoc/Curiosity-Nano-Base-for-Click-boards-User-Guide-50002839B.pdf) , [u-blox & mikroBUS™](https://www.u-blox.com/en/product/xplr-hpg-1)

### First Experimental Tests:  
based on Arduino IDE Examples for Custom Libraries

<img src="Images/IMG_3669_20.jpg" alt="polylab" width="25%"> MCCI LoRaWAN LMIC-node connected to TTN ...  
Tested with Arduino IDE 1.8.19 and DxCore Version 1.5.11 (No JoinAccept with Arduino IDE Version 2,x!)

<img src="Images/IMG_3674_20.jpg" alt="polylab" width="25%"> <img src="Images/IMG_3768.jpg" alt="polylab" width="25%"> Graphics with SPI TFT displays on mikroBUS™ socket ...  
Adafruit example sketch *graphicstest.ino* with ST7735 and ST7789 library. Initialize ST7789 240x240 with tft.init(240, 240, __SPI_MODE3__) https://tigoe.github.io/display-examples
 
<img src="Images/IMG_3685_20.jpg" alt="GPS & LiPo" width="25%"> <img src="Images/mapping.jpg" alt="GPS & Mapping" width="25%"> GPS-Module added (--> first TTN-Mapping walk) ...

<img src="Images/IMG_3677_20.jpg" alt="Clock" width="25%"> needs to be synced with RTC or GPS ...  

<img src="Images/IMG_3792_20.jpg" alt="Stepper Motor" width="25%"> PoLoLu Stepper Motor Driver on mikroBUS™ Modul ...

<img src="Images/IMG_3830_20.jpg" alt="DHT22" width="25%"> DHT22 Temperature/Humidity Sensor (incl. Payload Encoding / Decoding) ...

<img src="Images/IMG_3832_20.jpg" alt="Servo" width="25%"> Servo Sweep (#include <Servo_DxCore.h>) ...

<img src="Images/IMG_3842_20.jpg" alt="u-blox GPS Modul" width="25%"> u-blox PAM-7Q GPS Modul tested ...

### Peripheral Connectors
- 2 x 19 pin pinheader with proprietary "polylab" pinout  
- mikroBUS™ socket 
- 2 x Grove connector (I2C & UART)  
- 1 x Qwiic® connector
- MicroUSB (CH340N USB to UART converter)
   
### Power Supply Connectors
- Barrel Jack  7-12V DC, 3.5*1.3mm ( to 5V with AMS1117-5.0)  
- MicroUSB (5V to 3V3 with AP2112K-3.3)  
- JST PH 2.0  for Single LiPo cell (MCP73831 charge controller)  
- 6 pin UPDI-target-header

This board is still a WiP! There is a list with many changes, improvements and extensionss for the next version.

### DIY mikroBUS™ Socket compatibles Hardware-Modules:

<img src="Images/IMG_3731_20.jpg" alt="RFM95W" width="25%"> Breakout adapter from RFM95W module to mikroBUS™ socket

<img src="Images/IMG_3730_20.jpg" alt="NeoPixel" width="25%"> <img src="Images/IMG_3855_20.jpg" alt="NeoPixel" width="25%"> 8 daisy-chained NeoPixel

<img src="Images/IMG_3728_20.jpg" alt="LED" title="LED" width="25%"> LED's on all pins for mikroBUS™ socket testing

<img src="Images/IMG_3798_20.jpg" alt="Stepper Motor" width="25%"> PoLoLu Stepper Motor Driver

### "polylab"-Prototyping Ecosystem:

<img src="Images/IMG_3726_20.jpg" alt="side by side" width="25%"> PCB on doubler board

<img src="Images/IMG_3727_20.jpg" alt="breadboard" width="25%"> PCB on breadboard

<img src="Images/IMG_3729_20.jpg" alt="stacking" width="25%"> PCB stacked

<img src="Images/IMG_3851_20.jpg" alt="Power" with="25%"> powered with DC (9V battery), USB or LiPo

### "polylab"-Custom Boards:

<img src="Images/IMG_3733_20.jpg" alt="side by side" width="25%"> made with regular protoboards and pinheaders

#### Planned:

- Low Power / Sleep Mode  
- Energy Harvesting
* (https://www.tindie.com/products/jaspersikken/solar-harvesting-into-li-ion-battery)

Modelling a case with OpenSCAD (finished)
* (https://openscad.org)

<img src="Images/IMG_3846_20.jpg" alt="case" width="25%"> <img src="Images/IMG_3847_20.jpg" alt="case" width="25%"> <img src="Images/IMG_3848_20.jpg" alt="case" width="25%">

