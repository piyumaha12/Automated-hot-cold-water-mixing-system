# Automated hot-cold water mixing system 🚿🛀 


The automated hot-cold water mixing system is designed for domastic purpose in bathroom domain. 

There are many fetal accidents because of getting exposed to hot water used for bathing purpose,especially in case of solar heaters. This system insure the proper mixing ratio of hot and cold water, so that the user will be safe and also it will save time and you can enjoy hot water bathing without worrying.

> ![Part1 v56](https://user-images.githubusercontent.com/71897685/146817378-ad76bb1b-8dac-4e6a-b097-ad9828195dda.jpg)
> <p align = 'center' ><i> Image[1] shows controller designed by Piyush Mahajan in Fusion360 </i></p>

The image shown above, is a design of prototype, it will fit inside the wall and only the knob and screen part is visible to user.

It this project i used various sensors, keypad, display, valves, arduino and other things. The list of the parts and their specification is provided below:
1. Arduino Mega 2560 microcontroller
2. Temperator sensor DS18B20 x 3
3. Solenoid valve (1/4") x 4
4. keypad 4x3
5. LCD display 16x2
6. PCB board (double side)
7. Relay board
8. Jumper wires
9. LED lights
10. Polarized header pin.

<div class = "row" >
  <div class = "column">
    <img width = '20%' src = https://user-images.githubusercontent.com/71897685/150060550-def1eb6b-8ddf-49df-848a-c633910b4d4b.jpg />
    <img width = '20%' src = https://user-images.githubusercontent.com/71897685/150060558-b0050d12-6cf7-49fc-9179-dcebd2293592.jpg />
    <img width = '20%' src = https://user-images.githubusercontent.com/71897685/150060545-810a9deb-b1f7-4454-9226-e63ef6dcc42c.jpeg />
    <img width = '20%' src =https://user-images.githubusercontent.com/71897685/150060552-f7db528e-b274-4d87-ba5f-819542236cbc.png />
  </div>
  <div class = 'column'>
    <img width = '20%' src = https://user-images.githubusercontent.com/71897685/150062816-31675b3a-aff5-475f-9422-11c0912bf194.jpg />
    <img width = '20%' src = https://user-images.githubusercontent.com/71897685/150060542-ea6a34ac-ccbc-41ac-8904-689271a655b7.jpg />
    <img width = '20%' src = https://user-images.githubusercontent.com/71897685/150060534-39bc7213-354f-4d23-a309-adaa182d1dce.jpg />
    <img width = '20%' src = https://user-images.githubusercontent.com/71897685/150060555-9b78771c-b25d-4483-b9d5-3b905c49c910.jpg />
  </div>
 </div>

> The images are in order as list provided.

 
### This project can be divided into sub parts like:
1. Ordering components.
2. Programming
3. PCB Designning and Etching
4. Soldering all elements.
5. Creating pipeline network with solenoid valve.
6. Assembling all component and testing.

## Ordering Components:
The components required for this project are ordered from Surat and from website https://www.electronicscomp.com/
The extensive list of components required for this project are given in []

## Programming

The Programming language in C++ and C# for arduino. The prgramms are created in batches, so i can test individual components and then i combined those small programms into large and final one. 
- Program for Sensors [DS18B20.ino](https://github.com/piyumaha12/Automated-hot-cold-water-mixing-system/blob/e4a5798c5aa17a2d253fdcf8342bfb3c042deca8/DS18B20.ino)
- Program for I2C display [I2C_display.ino](https://github.com/piyumaha12/Automated-hot-cold-water-mixing-system/blob/e4a5798c5aa17a2d253fdcf8342bfb3c042deca8/I2C_display.ino)
- Program for Keypad [keypad.ino](https://github.com/piyumaha12/Automated-hot-cold-water-mixing-system/blob/e4a5798c5aa17a2d253fdcf8342bfb3c042deca8/keypad.ino)
- Final Complete program [actual_thermo.ino](https://github.com/piyumaha12/Automated-hot-cold-water-mixing-system/blob/e4a5798c5aa17a2d253fdcf8342bfb3c042deca8/actual_thermo.ino)
