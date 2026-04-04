#include "Menus.h"
#include "Miner.h"
#include "Equipment.h"
#include <iostream>

void showStats(const Miner& miner, const Equipment& equipment) {
    // Print the statistics menu
    std::cout << "---------------------------------------------\n";
    std::cout << "Money: " << miner.getMoney() << "$\n";
    std::cout << "Processed Mine: " << equipment.getProcessedMine() << "\n";
    std::cout << "Money Multiplier: " << equipment.getMoneyMultiplier() << "x\n";
    std::cout << "Digging Multiplier: " << equipment.getDiggingMultiplier() << "x\n";
    std::cout << "---------------------------------------------\n";
    std::cout << "Health: %" << miner.getHealth() << "\n";
    std::cout << "Energy: %" << miner.getEnergy() << "\n";
    std::cout << "Hunger: %" << miner.getHunger() << "\n";
    std::cout << "Thirst: %" << miner.getThirst() << "\n";
    std::cout << "---------------------------------------------\n";
}

void showShop() {
    std::cout << "---------------------------------------------\n";
    // Print the shop menu (drinks)
    std::cout << "1) Fresh Water (1$)\n";
    std::cout << "2) Miner's Juice (2$)\n";
    std::cout << "3) Energy Drink (10$)\n";
    std::cout << "4) Power Elixir (30$)\n";
    std::cout << "---------------------------\n";
    // Print the shop menu (foods)
    std::cout << "5) Bread (2$)\n";
    std::cout << "6) Canned Beans (10$)\n";
    std::cout << "7) Beef (25$)\n";
    std::cout << "8) Hearty Meat & Veggie Stew (60$)\n";
    std::cout << "---------------------------------------------\n";
}

void showMainMenu() {
    // Print the main menu options
    std::cout << "---------------------------------------------\n";
    std::cout << "1) Mine Ore\n";
    std::cout << "2) Sell Processed Ore\n";
    std::cout << "3) Upgrade Digging Multiplier\n";
    std::cout << "4) Upgrade Money Multiplier\n"; 
    std::cout << "5) Go to Shop\n";
    std::cout << "6) Visit Doctor\n";
    std::cout << "0) Exit Game\n";
    std::cout << "---------------------------------------------\n";
}