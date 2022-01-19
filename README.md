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
The extensive list of components required for this project are given in [Component list.pdf](https://github.com/piyumaha12/Automated-hot-cold-water-mixing-system/blob/b01df66d3225a2e69d0bdbaa8d460133292a6547/Component%20list.pdf)

## Programming

The Programming language in C++ and C# for arduino. The prgramms are created in batches, so i can test individual components and then i combined those small programms into large and final one. 
- Program for Sensors [DS18B20.ino](https://github.com/piyumaha12/Automated-hot-cold-water-mixing-system/blob/e4a5798c5aa17a2d253fdcf8342bfb3c042deca8/DS18B20.ino)
- Program for I2C display [I2C_display.ino](https://github.com/piyumaha12/Automated-hot-cold-water-mixing-system/blob/e4a5798c5aa17a2d253fdcf8342bfb3c042deca8/I2C_display.ino)
- Program for Keypad [keypad.ino](https://github.com/piyumaha12/Automated-hot-cold-water-mixing-system/blob/e4a5798c5aa17a2d253fdcf8342bfb3c042deca8/keypad.ino)
- Final Complete program [actual_thermo.ino](https://github.com/piyumaha12/Automated-hot-cold-water-mixing-system/blob/e4a5798c5aa17a2d253fdcf8342bfb3c042deca8/actual_thermo.ino)

## PCB Designing and Etching:
The PCB is designed so that, i can dissemble and assemble my project quickly, it is just like plugin-parts. Thats why i used Header pins and Polarized heads. (**Remember PCB used in this project is Two sided**)

The following photos shows the design and Manufacturing phase of PCB plate
- Circuit Design using EAGLE software
> ![schematics PCB](https://user-images.githubusercontent.com/71897685/150065919-75f2de0f-818a-4589-b9f3-0f3659cd4ccf.JPG)

**Board Design for Etching part**

> ![PCB arduino](https://user-images.githubusercontent.com/71897685/150065940-55a07f83-1886-4032-9931-7456b0d3ce27.JPG)

After designing the PCB circuit, the next part is to take print-out of Board design using **Laser-jet Printer** (only and only Laser jet) and place those printouts on the PCB plate and heat it using electric-iron, so that the ink will get transfered from paper to board. **remember PCB is double side** so same process will be repeated on other side, but take care about mismatch between circuits.

**AFTER INK TRANSFER PCB WILL LOOKS LIKE THIS:
> ON ONE SIDE**
> ![IMG_20190214_204747](https://user-images.githubusercontent.com/71897685/150066642-726ea0cc-b40d-4c54-9365-d2f505bf5c92.jpg)

> **AND ON OTHER SIDE**
> ![bottom side](https://user-images.githubusercontent.com/71897685/150066916-58ee8f5a-7777-4cba-8fed-0eae0fe2f9fe.png)

**Etching PCB Plate**
For Etching purpose, I am using FeCl2 (ferric chloride). after etching PCB plates Looks like this

> **ON ONE SIDE**
> ![IMG_20190215_153833](https://user-images.githubusercontent.com/71897685/150067396-b693f710-f80a-4e19-9f7d-4b315e8d557b.jpg)

> **ON OTHER SIDE**
> ![IMG_20190215_153825](https://user-images.githubusercontent.com/71897685/150067435-1ae4cfa7-aaf0-4274-986a-c3cb463c13a4.jpg)

> **COMPLETE CIRCUIT**
> ![IMG_20190214_222210](https://user-images.githubusercontent.com/71897685/150067475-ee9f2a1c-2ff4-4cc1-8ffc-0ac1582ab34e.jpg)





