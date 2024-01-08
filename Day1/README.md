# Day 1

## What is Qt?
- Qt is C++ GUI Framework
- cross-platform framework that supports Linux, Windows, Mac OS-X, Android, ios, Embedded Systems
- developed by the Qt company
- Qt framework is available in 2 flavours
  - Qt Opensource
  - Qt Enterprise for commercial use
- Qt allows developers to write applications once and run them on multiple platforms. This greatly simplifies the development process for applications that need to work across different operating systems.
- Qt provides a wide range of widgets (or controls) that can be used to design highly interactive user interfaces
  - These widgets include buttons, text boxes, labels, menus, and many more.
- supports 2D and 3D graphics application development
- Qt supports modules for network programming, which helps in writing applications that can communicate over TCP/IP.
- Qt supports bluetooth, IPC, Threads and Synchronization mechanisms
- supports internationalization and localization, allowing applications to be adapted for various languages and regions
- While Qt is primarily used with C++, bindings exist for other languages like Python, enabling a broader range of developers to use it
- The Qt framework is highly versatile and can be used to develop a wide range of applications across various platforms. Some of the key types of applications that can be developed using Qt include:

- Qt Framework is used for developing
  - Desktop Applications
  - Embedded Systems and IoT Devices
  - Mobile Applications - Android and ios
  - Industrial & Scientific Applications
  - Automotive Infotainment Systems
  - Medical applications
  - 2D and 3D Graphics Applications
  - Simulation and Training Software
  - Games
  - Multimedia Applications
  - Web Applications
  - Educational and Learning Softwares
  - Data Visualization Tools

## What is QML?
- part of Qt Framework
- helps in developing fluid GUI applications with Javascript like language
- QML is JavaScript with Qt extensions
- supports declarative syntax
- supports simple animation and touch-enabled applications
- support developing cross-platform applications that works on desktop, mobile and embedded systems
- seamless integration with C++ and Qt Widgets

## What is MOC?
- Meta Object Compiler
- is a tool that is part of Qt Framework toolchain
- It processes Qt C++ source files that contain Qt specific macros like Q_OBJECT` macro
- MOC generates standard C++ code with meta-information from these macros, enabling features like:
  - Signals and Slots: Qt's mechanism for event handling and inter-object communication
  - Run-Time Type Information: Enhanced type information used in Qt
  - Dynamic Property System: Allows properties to be added to and manipulated in Qt objects at runtime
- MOC plays a crucial role in enabling some of Qt's powerful features that are not natively supported by C++.

## What is Qt Creator?
- is an Integrated Development Environment (IDE) for Qt application development
- can write code, build, debug and run Qt applications
- helps developing Qt Widget based applications and QML applications

![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/f684632a-99f3-4b3d-b8b2-a614d8a71b1f)


## Lab - Developing a hello world Qt Widget application
Launch your Qt Creator IDE
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/f684632a-99f3-4b3d-b8b2-a614d8a71b1f)

Click on "Create Project"
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/01c16f21-cd44-41ac-aef7-bbccc8006d94)

Select "Qt Widgets Application" and click on Choose button
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/639fdaa2-45f6-44fd-8b5e-bf86975ed8b8)

Click on Next button
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/6984116c-b2b2-4f92-b297-bc2e65f4d4d4)

Click on Next button
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/1af32032-1e76-436a-ab3c-a048083c126e)

Click on Next button
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/c4e3cfc3-c252-45cb-90c0-5aacf38af3ba)

Click on Finish button
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/f1c58920-24bd-45d2-b140-efd9d42cf6df)

main.cpp
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/fc734b79-f1e6-46f9-b823-a6a10c9a6aae)

hello.pro
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/2330ebdf-2d01-4f2f-8ac6-54324ac5ffcb)

dialog.h
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/ef6c4246-c9d4-4338-82af-9059d0758cf4)

dialog.cpp
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/27a132b4-4216-44c9-aa5f-44d19ff77a81)



## Lab - Signal and Slots

![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/c6b7fb2e-5fcb-4c8c-9ab8-9a8b1d00c768)
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/3ae414c4-366a-416c-be71-3ec8ceff037f)
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/ab7b72cd-09a3-4a5f-8f36-2bd0dd4766d3)
