#ifndef MENUS_H
#define MENUS_H

#include <iostream>
#include "Miner.h"
#include "Equipment.h"

// We obtain the menu function with references to Miner and Equipment
void showStats(const Miner& miner, const Equipment& equipment);

void showShop();
void showMainMenu();

#endif // MENUS_H