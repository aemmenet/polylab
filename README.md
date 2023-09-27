## "polylab" Microchip AVR Dx32-Series Development-Board

### Hardware:

<img src="Images/IMG_3665_20.jpg" alt="polylab" width="50%">

- 2 layer board made with KiCad 7 EDA. Learned with
* https://www.udemy.com/course/kicad-like-a-pro-3e/
- proprietary form factor: 1/2 credit card size ( 53.98 x 42.8 mm)  
- 2 x 19 pin pinheader with proprietary "polylab" pinout  
- fits in 3D printed case programmed with OpenSCAD modeller  


### MCU:

<img src="Images/Microchip.jpg" alt="polylab" width="13%">

Microchip AVR64DD32 (QFP32 socket)
* https://www.youtube.com/watch?v=M-myqg-2c5s
* https://github.com/SpenceKonde/DxCore
* [SerialUPDI programmer](https://www.tindie.com/products/mcudude/serialupdi-programmer)

<img src="Images/IMG_3732_20.jpg" alt="polylab" width="50%">

Programming Optiboot Bootloader with SerialUPDI programmer via UPDI Target Header on Development Board.
 

### mikroBUS™:

<img src="Images/IMG_3666_20.jpg" alt="polylab" width="50%">

* https://www.mikroe.com/mikrobus
* https://www.mikroe.com/click
* [Sensirion & mikroBUS™](https://developer.sensirion.com/partner-spotlight/partner-spotlight-mikroelektronika)


### First Experimental Tests:  
based on Arduino IDE Examples für Custom Libraries

<img src="Images/IMG_3669_20.jpg" alt="polylab" width="50%"> Connected to TTN ...

RFM95W-Modul on mikroBUS™-Adapter, Bosch BME280 Sensor & OLED Display SSD1306 on I2C Grove-Asapter
 
<img src="Images/IMG_3674_20.jpg" alt="polylab" width="50%"> Graphics test with SPI TFT on mikroBUS™...
 
<img src="Images/IMG_3685_20.jpg" alt="polylab" width="50%"> GPS-Module and LiPo-Cell added & tested (--> TTN Mapper) ...

<img src="Images/IMG_3677_20.jpg" alt="polylab" width="50%"> Still needs to be synced with RTC or GPS ...


### Peripheral Connectors
- 2 x 19 pin pinheader with proprietary "polylab" pinout  
- mikroBUS™ compatible socket header  
- 2 x Grove connector (i2C & UART)  
- 1 x Qwiic® connector
   
### Power Supply Connectors
- Barrel Jack  7-12V DC, 3.5*1.3mm (AMS1117-5.0)  
- MicroUSB (CH340N USB to UART converter)  
- JST PH 2.0  for LiPo battery (MCP73831 charge controller)  
- 6 pin UPDI-target-header

This board is still a work in progress. There is a list of about 25 changes or improvements for the next version.

### DIY mikroBUS™ compatibles Modules:

<img src="Images/IMG_3731_20.jpg" alt="RFM95W" width="25%"> Breakout adapter from RFM95W to mikroBUS™

<img src="Images/IMG_3730_20.jpg" alt="NeoPixel" width="25%"> 8 daisy-chained NeoPixel

<img src="Images/IMG_3728_20.jpg" alt="LED" title="LED" width="25%"> LED's on all pins for mikroBUS™ testing

#### Planned:

* (https://www.tindie.com/products/jaspersikken/solar-harvesting-into-li-ion-battery)


#### "polylab"-PCB:

<img src="Images/IMG_3726_20.jpg" alt="side by side" width="25%"> on doubler board

<img src="Images/IMG_3727_20.jpg" alt="breadboard" width="25%"> on breadboard

<img src="Images/IMG_3729_20.jpg" alt="stacking" width="25%"> stacked
