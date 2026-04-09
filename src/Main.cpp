#include "Console.h"
#include "Equipment.h"
#include "Menus.h"
#include "Miner.h"
#include "Rank.h"
#include <iostream>

int main() {
    Miner miner;
    Equipment equipment;
    Rank rank;
    
    // For menu
    int choose;
    int chooseAmount;

    float moneySpent;
    float diggingMoneySpent;
    
     while (true) {
        clearConsole();
        
        // Display player stats and main menu
        showStats(miner, equipment, rank);
        showMainMenu();
        
        // Get a choice
        std::cout << "Choose an option: ";
        std::cin >> choose;
        
        // Menu options
        switch (choose) {
            case 0:
                std::cout << "\nGoodbye...\n";
                return 0;

            case 1:
                 if (miner.getHealth() >= 25 && 
                     miner.getEnergy() >= 10 &&
                     miner.getHunger() >= 10 && 
                     miner.getThirst() >= 10) {    

                     miner.removeHealth(1);
                     miner.removeEnergy(5);
                     miner.removeHunger(5);
                     miner.removeThirst(5); 

                     rank.addXP(50);
                     
                     // Processed mine = amount mined * digging multiplier
                     float totalMined = 1 * equipment.getDiggingMultiplier();
                     equipment.addProcessedMine(totalMined);

                     Pause();
                     }
                else {
                    std::cout << "It's not your place to dig a mine....\n";
                    std::cout << "take care of yourself and come back later..\n";
                    
                    Pause();
                 }
                 break;

             case 2:
                 std::cout << "Enter the amount of processed mine you will sell: ";
                 std::cin >> chooseAmount;

                  if (chooseAmount <= equipment.getProcessedMine()) {
                      equipment.spendProcessedMine(chooseAmount);

                      // Sell processed mine = amount * money multiplier
                      float totalSell = chooseAmount * equipment.getMoneyMultiplier();
                      miner.addMoney(totalSell);
                     } 
                else {
                    std::cout << "You do not have as many processed mine as the amount you entered...\n";

                    Pause();
                 }
                 break;

             case 3:
                 std::cout << "[1.0 = 100$] Enter money to upgrade digging multiplier: $";
                 std::cin >> diggingMoneySpent;

                  if (diggingMoneySpent >= 100 && diggingMoneySpent <= miner.getMoney()) {
                      miner.removeMoney(diggingMoneySpent);

                      // 1.0 Multiplier Upgrade = 100$
                      float multiplierIncrease = diggingMoneySpent / 100.0f;
                      equipment.addDiggingMultiplier(multiplierIncrease);

                      Pause();
                     } 
                else {
                    std::cout << "Invalid or insufficient quantity..\n";

                    Pause();
                  }
                  break;

             case 4:
                 std::cout << "[1.0 = 300$] Enter money to upgrade money multiplier: $";
                 std::cin >> moneySpent;

                  if(moneySpent >= 300 && moneySpent <= miner.getMoney()) {
                     miner.removeMoney(moneySpent);

                     // 1.0 Multiplier Upgrade = 300$
                     float multiplierIncrease = moneySpent / 300.0f;
                     equipment.addMoneyMultiplier(multiplierIncrease);

                     Pause();
                    }
               else {
                   std::cout << "Invalid or insufficient quantity..\n";
                 }
                 break;

            case 5:
                showShop();

                std::cout << "Choose an option: ";
                std::cin >> choose;
                 
                 // Shop options
                 switch (choose) {
                     case 1:
                         if (miner.getMoney() >= 1 && miner.getThirst() <= 100) {
                             miner.spendMoney(1);
                             miner.addThirst(5);

                             Pause();
                          } else {
                             std::cout << "Invalid or insufficient money..\n";

                             Pause();
                         }
                           break;

                     case 2:
                         if (miner.getMoney() >= 2 && miner.getThirst() <= 100 && miner.getEnergy() <= 100) {
                             miner.spendMoney(2);
                             miner.addThirst(5);
                             miner.addEnergy(2);

                             Pause();
                          } else {
                             std::cout << "Invalid or insufficient money..\n";

                             Pause();
                          }
                          break;

                     case 3:
                         if (miner.getMoney() >= 10 && miner.getEnergy() <= 100 && miner.getThirst() <= 100) {
                             miner.spendMoney(10);
                             miner.addEnergy(25);
                             miner.addThirst(5);

                             Pause();
                          } else {
                             std::cout << "Invalid or insufficient money..\n";

                             Pause();
                          }
                          break;

                     case 4:
                         if (miner.getMoney() >= 30 && miner.getEnergy() <= 100 && miner.getThirst() <= 100) {
                             miner.spendMoney(30);
                             miner.addEnergy(50);
                             miner.addThirst(50);

                             Pause();
                          } else {
                             std::cout << "Invalid or insufficient money..\n";

                             Pause();
                          }
                          break;

                     case 5:
                         if (miner.getMoney() >= 2 && miner.getHunger() <= 100) {
                             miner.spendMoney(2);
                             miner.addHunger(5);

                             Pause();
                          } else {
                             std::cout << "Invalid or insufficient money..\n";

                             Pause();
                          }
                          break;

                     case 6:
                         if (miner.getMoney() >= 10 && miner.getHunger() <= 100 && miner.getEnergy() <= 100) {
                             miner.spendMoney(10);
                             miner.addHunger(25);
                             miner.addEnergy(2);

                             Pause();
                         } else {
                            std::cout << "Invalid or insufficient money..\n";

                            Pause();
                         }
                         break;

                     case 7:
                         if (miner.getMoney() >= 25 && miner.getHunger() <= 100 && miner.getEnergy() <= 100) {
                             miner.spendMoney(25);
                             miner.addHunger(60);
                             miner.addEnergy(15);

                             Pause();
                         } else {
                            std::cout << "Invalid or insufficient money..\n";

                            Pause();
                         }
                         break;

                     case 8:
                         if (miner.getMoney() >= 60 && miner.getHunger() <= 100 && miner.getEnergy() <= 100 && miner.getThirst() <= 100) {
                             miner.spendMoney(60);
                             miner.addHunger(100);
                             miner.addEnergy(50);
                             miner.addThirst(1);

                             Pause();
                         } else {
                            std::cout << "Invalid or insufficient money..\n";

                            Pause();
                         }
                         break;

                     default:
                         std::cout << "Invalid selection..\n";
                         Pause();
                         break;
                 }
                 break;
                     
            case 6:
                if (miner.getMoney() >= 25) {
                    miner.spendMoney(25);
                    miner.addHealth(100);

                    std::cout << "Full health was added for 25$";

                    Pause();
                }
                else {
                    std::cout << "You need $25 to see a doctor..\n";

                    Pause();
                }
                break;

            default:
                std::cout << "Invalid selection..\n";
                Pause();
                break;
               
        }

     }
}