# Raycaster

## Overview
This project is a basic raycasting engine implemented in C++ using SDL2. Raycasting is a technique used to create a 3D perspective in a 2D map, famously used in early first-person shooter games like Wolfenstein 3D.

## Features
- Basic raycasting for 3D rendering
- Player movement and rotation
- Simple map representation

## Prerequisites
- **SDL2 library**: The project relies on the SDL2 library. Ensure SDL2 is installed on your system. For installation instructions, refer to the [SDL2 installation guide](https://wiki.libsdl.org/Installation).

## Installation

### Windows
1. **Install SDL2:**
   - Download the development libraries for SDL2 from the [SDL2 download page](https://www.libsdl.org/download-2.0.php).
   - Extract the downloaded files and place the `include` and `lib` folders in a suitable directory.
   - Add the `include` directory to your project's include path and the `lib` directory to your project's library path.

2. **Install MinGW:**
   - Download and install [MinGW](http://www.mingw.org/).
   - Add the `bin` directory of MinGW to your system's PATH environment variable.

### macOS
1. **Install Homebrew (if not already installed):**
   ```bash
   /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
   ```
   
2.  **Install SDL2:**
    ```bash
    brew install sdl2
    ```

### Linux (Ubuntu/Debian)
1. **Update package lists:**
   ```bash
   sudo apt-get update
   ```
   
2. **Install SDL2 development libraries and build tools:**
   ```bash
   sudo apt-get install libsdl2-dev build-essential
   ```
   `libsdl2-dev` installs the SDL2 development libraries, while `build-essential` provides the GCC compiler and `make` utility needed to build the project.

3. **Clone the repository:**
   ```bash
   git clone https://github.com/Deb-svg/raycasting.git
   cd raycasting
   ```

## Building the Project
# Cross-Platform (Windows, macOS, Linux)
1. **Build the project using the Makefile:**
   ```bash
   make
   ```
   This will compile the source files and create an executable named `raycasting` in the root directory.

**Common Issues:**
- **Error:** `make: command not found`: Ensure `make` is installed. Install it using `sudo apt-get install build-essential` on Linux.
- **Error:** `libsdl2.so not found`: Ensure `libsdl2-dev` is installed. Use `sudo apt-get install libsdl2-dev` to install it on Linux.

## Running the Project
After building the project, you can run the executable with the following command:
```bash
./raycasting
```

**Common Issues:**
- **Error:** `./raycasting: No such file or directory`: Verify that the build process created the `raycasting` executable in the project root directory. Chech for any build errors.

## Controls
- **Player Movement**: Use the arrow keys or `WASD` to move the player forward, backward, and rotate left and right.
- **Quit**: Close the window to exit the application

## Raycasting Algorithm
The core of the raycasting engine involves casting rays from the player's position, checking for intersections with walls in the map, and rendering vertical slices based on the distance to these walls to create a 3D perspective.

## Future Enhancements
- **Texture Mapping**: Adding textures to walls for a more realistic rendering.
- **Collision Detection**: Implementing collision detection to prevent the player from moving through walls.
- **Additional Controls**: Enhancing player controls for smoother movement and rotation.
- **Optimization**: Improving performance for larger maps and higher resolutions.

## Resources
- [SDL2 Documentation]([https://](https://wiki.libsdl.org/SDL2/FrontPage).
- [Raycasting Tutorial](https://lodev.org/cgtutor/raycasting.html): Comprehensive guide on raycasting techniques.

## Acknowledgements
- Thanks to [Lode Vandevenne](https://lodev.org/) for his excellent tutorials on raycasting.
- Inspired by classic games like Wolfenstein 3D.

Feel free to contribute to this project by forking the repository, creating new features, fixing bugs, or improving documentation.
