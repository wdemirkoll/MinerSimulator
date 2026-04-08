# Miner Simulator

A miner simulation designed as a simple console application that offers menu-based interaction. In this simulation, the player controls a miner who digs in a mine; the extracted resources are converted into processed metal form and sold to generate income.

The income obtained is used to maintain the character’s health and to manage basic needs such as hunger, thirst, and energy. Additionally, the player can visit a doctor to restore the character’s health in exchange for a certain cost.

The project was developed in accordance with Object-Oriented Programming (OOP) principles and was prepared for practice purposes.

---

## Prewiev

<img width="531" height="593" alt="Ekran Alıntıdsı" src="https://github.com/user-attachments/assets/53ed35ec-737b-4b7f-97ea-07cbb3ef8808" />

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

### GitHub: wdemirkoll
### Instagram: https://www.instagram.com/w.demirkoll/
### Email: wdemirkoll.dev@gmail.com

---

 🗓 Created: April 2026

 ## I seem to like OOP :) practice practice
 ## If you like my project, I deserve a star :)
