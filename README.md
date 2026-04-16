# Miner Simulator

A miner simulation designed as a simple console application offering menu-based interaction. In this simulation, the player controls a miner digging in a mine; the extracted resources are transformed into processed metal and sold to generate income.

The income earned is used to maintain the character's health and meet basic needs such as hunger, thirst, and energy. The player can also visit a doctor to improve the character's health for a fee.

The player gains XP each time they mine, leveling up. They advance one rank every 3 levels. There are 25 ranks available in the game.

The project was developed and prepared for application purposes in accordance with Object-Oriented Programming (OOP) principles.

---

# Disclaimer ❗❗❗
This project has been developed for learning and practice purposes only. It is not intended for use in a production (live) environment. Some features may be intentionally incomplete, and certain functionalities may not be fully developed or finalized. In addition, security measures are not fully implemented or thoroughly tested, which may result in potential vulnerabilities or unexpected behavior. Therefore, it is strongly advised not to use this project directly in real-world or critical systems, as it may not meet the required standards for reliability, stability, or security.

---

## Prewiev

<img width="439" height="663" alt="ssssssssssss" src="https://github.com/user-attachments/assets/18deefcb-94dd-4bb8-9907-34de68836b4d" />

---

## Requirements

Before building the project, make sure you have:

- C/C++ (C++17) compatible compiler (GCC, Clang or MSVC)
- CMake 3.15 or newer

---

## Verification of Installation

Check if the required tools are installed:

```bash
cmake --version
g++ --version
```

Both commands should return version information.

### If Not Installed

#### Windows
- Install MinGW (GCC) or Visual Studio (MSVC)
- Make sure the compiler is added to system PATH

#### Linux
```bash
sudo apt update
sudo apt install build-essential cmake
```

#### macOS
```bash
brew install cmake gcc
```

---

## Build and Run

### Clone the Repository
```bash
git clone https://github.com/wdemirkoll/MinerSimulator.git
cd MinerSimulator
```

### Build the Project
```bash
mkdir build
cd build
cmake ..
cmake --build .
```

### Run the Application

```bash
# Windows
./MinerSimulator.exe

# Linux / macOS
./MinerSimulator
```

---

## Troubleshooting

### Clean Build
If you encounter build issues, try a clean build:

```bash
rm -rf build
mkdir build && cd build
cmake ..
cmake --build .
```

### Compiler Check
Verify that your compiler is properly installed:

```bash
g++ --version
```

If this fails, the compiler is either not installed or not added to PATH.

### CMake Configuration Issues
If CMake configuration fails:
```bash
cmake --version  # Verify that CMake is 3.15 or newer
which cmake      # (Linux/macOS) or where cmake (Windows)
```

### Build Errors
- Make sure you are using a C/C++ (C++17) compatible compiler
- Check that all dependencies are installed
- Try removing the `build` directory and rebuilding from scratch

---

## **Author**

**Abdüsselam Demirkol**  
### 🗓 Created: April 2026

#### GitHub: wdemirkoll
##### Instagram: https://www.instagram.com/w.demirkoll/
##### Email: wdemirkoll.dev@gmail.com

---

 ## I seem to like OOP :) practice practice
 ## If you like my project, I deserve a star :)
