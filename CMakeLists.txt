cmake_minimum_required(VERSION 3.10)

project(MinerSimulator)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)

# Define the executable target
add_executable(main
    src/Main.cpp
    src/Console.cpp
    src/Equipment.cpp
    src/Menus.cpp
    src/Miner.cpp
    src/Rank.cpp
)

# Specify the include directories for the target
target_include_directories(main PRIVATE include)