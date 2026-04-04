#include "Console.h"
#include <iostream>

// Keeping the console clean
void clearConsole() {
#ifdef _WIN32
   system("cls"); // Windows
#else
   std::cout << "\033[2J\033[1;1H"; // Linux / Mac
#endif
}

// Added pause to avoid bugs
void Pause() {
    std::cout << "\nPress ENTER to continue.... ";
    std::cin.ignore();
    std::cin.get();
}