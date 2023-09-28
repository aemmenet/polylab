## "polylab" Microchip AVR Dx32-Series Development-Board

### Hardware:

<p align="center">
<img src="Images/IMG_3665_20.jpg" alt="polylab" width="50%">
</p>

- 2 layer board made with KiCad 7 EDA. Learned with https://www.udemy.com/course/kicad-like-a-pro-3e/
- proprietary form factor: 1/2 credit card size ( 53.98 x 42.8 mm)  
- 2 x 19 pin pinheader with proprietary "polylab" pinout

### MCU:

<p align="center">
<img src="Images/Microchip.jpg" alt="polylab" width="13%">
</p>

Microchip AVR64DD32 (QFP32 socket)
* https://www.youtube.com/watch?v=M-myqg-2c5s
* https://github.com/SpenceKonde/DxCore Current release 1.5.10 (October 28, 2023)
* [SerialUPDI programmer](https://www.tindie.com/products/mcudude/serialupdi-programmer)

<p align="center">
<img src="Images/IMG_3732_20.jpg" alt="polylab" width="50%">
</p>

<p align="center">
Programming Optiboot Bootloader with SerialUPDI programmer via UPDI Target Header on Development Board.
</p>

### mikroBUS™:

<p align="center">
<img src="Images/IMG_3666_20.jpg" alt="polylab" width="50%">
</p>

* https://www.mikroe.com/mikrobus
* https://www.mikroe.com/click
* [Sensirion & mikroBUS™](https://developer.sensirion.com/partner-spotlight/partner-spotlight-mikroelektronika)


### First Experimental Tests:  
based on Arduino IDE Examples für Custom Libraries

<img src="Images/IMG_3669_20.jpg" alt="polylab" width="50%"> MCCI LoRaWAN LMIC-node connected to TTN ...

<img src="Images/IMG_3674_20.jpg" alt="polylab" width="50%"> Graphics test with SPI TFT on mikroBUS™ port ...
 
<img src="Images/IMG_3685_20.jpg" alt="polylab" width="50%"> GPS-Module and LiPo-Cell added & tested (--> TTN Mapper) ...

<img src="Images/IMG_3677_20.jpg" alt="polylab" width="50%"> Still needs to be synced with RTC or GPS ...


### Peripheral Connectors
- 2 x 19 pin pinheader with proprietary "polylab" pinout  
- mikroBUS™ compatible port 
- 2 x Grove connector (I2C & UART)  
- 1 x Qwiic® connector
   
### Power Supply Connectors
- Barrel Jack  7-12V DC, 3.5*1.3mm (AMS1117-5.0)  
- MicroUSB (CH340N USB to UART converter)  
- JST PH 2.0  for LiPo battery (MCP73831 charge controller)  
- 6 pin UPDI-target-header

This board is still a work in progress. There is a list of about 25 changes or improvements for the next version.

### DIY mikroBUS™ Port compatibles Modules:

<img src="Images/IMG_3731_20.jpg" alt="RFM95W" width="25%"> Breakout adapter from RFM95W to mikroBUS™ port

<img src="Images/IMG_3730_20.jpg" alt="NeoPixel" width="25%"> 8 daisy-chained NeoPixel

<img src="Images/IMG_3728_20.jpg" alt="LED" title="LED" width="25%"> LED's on all pins for mikroBUS™ port testing

### "polylab"-Prototyping Ecosystem:

<img src="Images/IMG_3726_20.jpg" alt="side by side" width="25%"> PCB on doubler board

<img src="Images/IMG_3727_20.jpg" alt="breadboard" width="25%"> PCB on breadboard

<img src="Images/IMG_3729_20.jpg" alt="stacking" width="25%"> PCB stacked

### "polylab"-Custom Boards:

<img src="Images/IMG_3733_20.jpg" alt="side by side" width="25%"> made with regular protoboards

#### Planned:

Energy Harvesting
* (https://www.tindie.com/products/jaspersikken/solar-harvesting-into-li-ion-battery)

Customize 3D printed case programmed with OpenSCAD modeller
* (https://openscad.org)

<img src="Images/IMG_3324_20.jpg" alt="case" width="25%">

