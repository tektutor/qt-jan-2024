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


## ⛹️‍♀️ Lab - Developing a hello world Qt Widget application
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
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/57f007f5-3374-4df7-a94f-6b190fbf7af7)

dialog.cpp
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/547863d8-86ca-4da1-8d56-875fe383f013)

Save all files by pressing Ctrl+Shift+S

Build your Qt application by pressing Ctrl+B

Run your Qt application by pressing Ctrl+R
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/cbf0204a-b6cb-4541-88c2-02b671e33609)

## ⛹️‍♂️ Lab - Horizontal Box Layout

This lab exercise will demonstrate, how the Horizontal Box Layout manager arranges its child widgets in a left to right fashion within a row.

Create a new project of type Qt widget applicaiton 
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/1de85943-764b-41de-b5cf-7220cb08c914)

Project Location
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/fe1fd6f9-430c-4ee4-af33-1617e0f83113)

Define Build System
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/eaadc80e-5b79-4b93-8a61-f9d0fc4ba3bb)

Class Information
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/8fbdd063-74a9-4e6d-8e8b-7b98dc52e5f2)

Translation File
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/f3e12165-b32c-454a-ae8a-c89241d669e4)

Kit Selection
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/05f12fd5-744f-44b0-b266-869a4f6f9706)

Project Management
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/959d4416-c3bb-4915-bb4b-c9147bb842de)

dialog.h
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/3c0e1e5a-06a3-4428-9855-f159470adf85)

dialog.cpp
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/386fa057-f6a2-44a4-8250-4fca9cafebc6)

main.cpp
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/bc3cbf3b-65c9-45e9-bd0f-273e1fd4ded3)

Build and Run your application
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/0cb3063f-5f8a-4dcb-95a6-ac312c702f5f)

## ⛹️‍♂️ Lab - Vertical Box Layout
This lab exercise will demonstrate, how the Vertical Box Layout manager arranges its child widgets in a top to bottom fashion within a column vertically.

Create a new project of type Qt widget applicaiton 
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/1de85943-764b-41de-b5cf-7220cb08c914)

Project Location
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/e5c40d51-2910-4a11-8a31-f67aff9ef419)

Define Build System
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/eaadc80e-5b79-4b93-8a61-f9d0fc4ba3bb)

Class Information
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/8fbdd063-74a9-4e6d-8e8b-7b98dc52e5f2)

Translation File
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/f3e12165-b32c-454a-ae8a-c89241d669e4)

Kit Selection
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/2bc0bd80-b38e-4fd3-acef-04880bbe9f36)

Project Management
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/f5701d19-6024-40f7-baea-cf3d2f6c3da0)

dialog.h
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/63b9dd5a-8f94-4b10-9b55-8cd1e1c68f7a)

dialog.cpp
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/a44c3de5-8770-478f-bcfb-6b2f26e82235)

Build and Run your application
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/e43c430b-1efb-429e-86a0-40c22b2afd7f)

QPushButton has its own default preferred size policy, which expands/shrinks only horizontally when the window size is resized.  By default, QPushButton will not expand vertically, but we could override the size policy as shown below in dialog.cpp to force it expand/shrink vertically as well.
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/39c20eda-3cb0-47cc-8f69-45c145f3d91b)

Build and Run your application
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/d2fc8c68-abb3-49e0-9c79-1dc078dd2719)

## ⛹️‍♂️ Lab - Box Layout
This lab exercise will demonstrate, the features supported by Box Layout manager.  Actually, the QHBoxLayout and QVBoxLayout are just convenient classes with fixed orientation while Box Layout is their base class.
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/3bbc0643-a75b-4437-8ad0-ef6ae8da7fa7)![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/51755315-a341-440b-8387-b8c607263714)

QBoxLayout supports the below Directions to arrange its child widgets
<pre>
QBoxLayout::LeftToRight
QBoxLayout::RightToLeft
QBoxLayout::TopToBottom
QBoxLayout::BottomToTop
</pre>
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/4d1fd969-67e4-4b83-a807-b455d438b808)


Let's now create a new project of type Qt widget applicaiton 
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/1de85943-764b-41de-b5cf-7220cb08c914)

Project Location
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/0e769087-ea42-47e1-a268-0cd552311450)

Define Build System
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/eaadc80e-5b79-4b93-8a61-f9d0fc4ba3bb)

Class Information
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/8fbdd063-74a9-4e6d-8e8b-7b98dc52e5f2)

Translation File
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/f3e12165-b32c-454a-ae8a-c89241d669e4)

Kit Selection
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/bbedd23e-2158-4da1-9a4a-5565dacc78e4)

Project Management
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/47be78bf-8c20-4dae-9592-b6087d5e64fd)

dialog.h
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/29d511d1-9959-40ec-9492-97bbb3e9f302)

dialog.cpp
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/c02a3f5c-b486-4d5d-b9ae-6869904a03ff)

Build and Run your application
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/9d9e2ce5-5077-4293-9bbb-69e2b7e9fe14)

Now, let's modify the dialog.cpp as shown below to instruct box layout arrange the buttons in right to left fashion.
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/1aa95c0c-1979-4f34-87b5-f4c113b9ccf0)

Build and Run your application to observe Button3 appears first, i.e buttons are arranged in right to left fashion.
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/9a51c5d3-6079-47b1-950f-fc555335ca09)

Now, let's modify the dialog.cpp as shown below to instruct box layout arrange the buttons in top to bottom fashion.  This works just like QVBoxLayout.
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/563b6cb3-477f-4a72-8210-65a78a1cf41b)

Build and Run your application to observe Button1, Button2 and Button3 are arranged in Top to Bottom fashion respectively.
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/cce7b14f-4322-45bf-bad1-95156dee9293)

Now, let's modify the dialog.cpp as shown below to instruct box layout arrange the buttons in Bottom to Top fashion.
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/345142eb-5c2c-4a40-bbcf-0143a972789e)

Build and Run your application to observe Button1, Button2 and Button3 are arranged in Bottom to Top fashion respectively.
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/273c1182-0c7f-443d-8015-ea0f62f4ef24)


## ⛹️‍♂️ Lab - Box Layout with Right Aligned Buttons

This lab exercise will demonstrate, how QBoxLayout could be configured to right align or left align its child widgets.

Let's now create a new project of type Qt widget applicaiton 
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/1de85943-764b-41de-b5cf-7220cb08c914)

Project Location
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/aecb33ee-e0ff-4bfb-a0f6-0f9dbe5e9822)

Define Build System
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/eaadc80e-5b79-4b93-8a61-f9d0fc4ba3bb)

Class Information
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/8fbdd063-74a9-4e6d-8e8b-7b98dc52e5f2)

Translation File
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/f3e12165-b32c-454a-ae8a-c89241d669e4)

Kit Selection
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/3677dfbd-260f-488f-8656-ec7e52ee11ce)

Project Management
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/d5a4e93d-0ce2-4965-a8a9-d9fe61178dc7)

dialog.h
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/730344a3-8164-4618-a2a5-3bcdba2b584e)

dialog.cpp
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/231be778-e834-4393-9698-ff38483672b8)

Build and Run your application
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/debb0899-8399-4650-b166-c1166d8199f4)

## ⛹️‍♂️ Lab - Grid Layout

This lab exercise will demonstrate, how QGridLayout arranges its child widgets in a tabular format in different rows and columns.

Let's now create a new project of type Qt widget applicaiton 
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/1de85943-764b-41de-b5cf-7220cb08c914)

Project Location
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/c7e0c6ee-9a22-45b8-8c4e-70b38544aa3c)

Define Build System
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/eaadc80e-5b79-4b93-8a61-f9d0fc4ba3bb)

Class Information
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/8fbdd063-74a9-4e6d-8e8b-7b98dc52e5f2)

Translation File
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/f3e12165-b32c-454a-ae8a-c89241d669e4)

Kit Selection
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/d94a5d61-24fc-46be-b837-85de3f78d604)

Project Management
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/7af06b49-d4a6-4670-8c94-cd1fb45960dd)

dialog.h
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/e8d99c70-c5a0-4fc6-b4df-9de91f3fbc1a)

Grid Layout also supports widgets occupy more multiple rows and columns.  It is not necessary that all widgets in GridLayout to be of same size.  In other words, every widget could decide how many cells they would like to use within in the Grid Layout by configuring the row and column spanning as shown in dialog.cpp below.
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/3209db05-be8b-4296-8197-85f9a5a6f1fa)
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/3e009871-9d55-4e1c-9f0a-c854d1d4241b)
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/d810bbc5-0938-4fe4-be4a-26862ff75289)

Build and Run your application
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/0ab6e4b0-4cbd-49bd-8a4b-1c9db17e54bb)

## ⛹️‍♂️ Lab - Signal and Slots

![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/c6b7fb2e-5fcb-4c8c-9ab8-9a8b1d00c768)
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/3ae414c4-366a-416c-be71-3ec8ceff037f)
![image](https://github.com/tektutor/qt-jan-2024/assets/12674043/ab7b72cd-09a3-4a5f-8f36-2bd0dd4766d3)
