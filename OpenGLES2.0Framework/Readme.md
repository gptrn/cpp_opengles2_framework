# OpenGLES2.0Framework

OpenGLES2.0Framework is a project which could be used to render a frame with 3D context.

This project is tightly dependent to Utilities project which is managed alongside this project.

## Knowledge Requirements

- C++ Intermediate to Advanced
- 3D Rendering Pipeline
- Visual Studio Editor
- Debugging

## Technical Requirements

- Windows Operating System
- Visual Studio 2015 or above with C++ Package

## Building The Project

1. Copy/Fork/Checkout/Clone/Export/Download this project from the repository
2. Open the "/OpenGLES2.0Framework.sln" with Visual Studio
3. DO NOT RUSH! It is NOT recommended to retarget the projects automatically. So, choose "cancel" on retarget prompt.
4. Try to build the project on "Debug/Win32" configuration.
5. If there's an error about the Target Platform or Platform Toolset, you could change it manually:
	- Right click the project in the Solution Explorer >> Properties
	- Under the Configuration Properties >> General tab, change the "Target Platform Version" field to the installed version
	- Also you could check the Platform Toolset (it is recommended to install and use the Visual Studio 2015 (v140))
6. The successfully built project will generate an executable which draw a simple Red Triangle