# Advanced OS Project

This project is an advanced bootable x64 operating system that features a graphical user interface (GUI) with capabilities such as clicking, a taskbar, and customizable wallpaper.

## Project Structure

The project is organized into the following directories and files:

- **src/**: Contains the source code for the operating system.
  - **kernel/**: Implements the core functionality of the OS.
    - `kernel.cpp`: Contains the kernel implementation, including initialization routines and the main loop.
    - `kernel.h`: Declares the kernel class and its public methods.
  - **boot/**: Contains the bootloader code.
    - `bootloader.asm`: Assembly code for the bootloader that initializes the system and loads the kernel.
    - `bootloader.h`: Declares functions related to the bootloader.
  - **gui/**: Implements the graphical user interface.
    - `desktop.cpp`: Manages the desktop environment, including background and icons.
    - `desktop.h`: Declares the Desktop class and its methods.
    - `taskbar.cpp`: Implements taskbar functionality and user interactions.
    - `taskbar.h`: Declares the Taskbar class and its methods.
    - `wallpaper.cpp`: Manages wallpaper settings and changes.
    - `wallpaper.h`: Declares the Wallpaper class and its methods.
  - **input/**: Handles input from devices.
    - `mouse.cpp`: Implements mouse input handling.
    - `mouse.h`: Declares the Mouse class and its methods.
  - **drivers/**: Contains device drivers for disk and video.
    - `disk.cpp`: Implements disk driver functionality.
    - `disk.h`: Declares the Disk class and its methods.
    - `video.cpp`: Implements video driver functionality.
    - `video.h`: Declares the Video class and its methods.
  - **tasks/**: Manages task scheduling.
    - `scheduler.cpp`: Implements the task scheduler.
    - `scheduler.h`: Declares the Scheduler class and its methods.

- **include/**: Contains header files for common definitions and configurations.
  - `common.h`: Common definitions and utility functions.
  - `config.h`: Configuration constants and settings.

- **linker.ld**: Linker script for defining how object files are linked.

- **Makefile**: Build instructions for compiling the project.

- **README.md**: Documentation for the project.

- **LICENSE**: Licensing information for the project.

## Features

- **Graphical User Interface**: A user-friendly GUI that allows interaction through mouse clicks.
- **Taskbar**: A taskbar that displays running applications and provides easy access to system functions.
- **Customizable Wallpaper**: Users can set and change the desktop wallpaper to personalize their experience.

## Building the Project

To build the project, use the provided Makefile. Run the following command in the terminal:

```
make
```

This will compile the source code and generate the bootable image.

## Running the OS

To run the operating system, you can use an emulator like QEMU. Execute the following command:

```
make run
```

This will launch the OS in the emulator for testing and development purposes.

## License

This project is licensed under the MIT License. See the LICENSE file for more details.