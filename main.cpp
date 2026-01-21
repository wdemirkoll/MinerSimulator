#include <iostream>
#include <string>

// Player nickname
std::string Nickname;

// Player resources
double Money = 0;
double Mines = 0;

// Tool power
int PickaxePower = 1;

// Player stats
int Hunger = 100;
int Energy = 100;

// General input variable
int Choose;

// Keeps Energy and Hunger values between 0 and 100
void Energy_Hunger_Logic(){
    if (Energy > 100) Energy = 100;
    if (Energy < 0) Energy = 0;

    if (Hunger > 100) Hunger = 100;
    if (Hunger < 0) Hunger = 0;
}

// Displays player statistics
void Statistics(){
    std::cout << "====================================" << std::endl;
    std::cout << "Nickname: " << Nickname << std::endl;
    std::cout << "Money: $" << Money << std::endl;
    std::cout << "Mines: " << Mines << std::endl;
    std::cout << "Pickaxe Power: " << PickaxePower << "x" << std::endl;
    std::cout << "Energy: " << Energy << std::endl;
    std::cout << "Hunger: " << Hunger << std::endl;
    std::cout << "====================================" << std::endl;
}

// Main menu options
void MainMenu(){
    std::cout << "[1] - Digging" << std::endl;
    std::cout << "[2] - Sell Mines" << std::endl;
    std::cout << "[3] - Upgrade Pickaxe Power" << std::endl;
    std::cout << "[4] - Eat" << std::endl;
    std::cout << "[5] - Rest" << std::endl;
    std::cout << "[6] - Exit" << std::endl;
}

// Player entry and starter bonus
void Entry(){
    std::cout << "Enter a nickname, ";
    std::getline(std::cin, Nickname);

    std::cout << "$5000 gift for testing the project :)" << std::endl;
    Money += 5000;
}

// Gets user choice
void ChooseFunction(){
    std::cout << "Choose: ";
    std::cin >> Choose;
}

int main(){
    Entry();

     while(true){
        Energy_Hunger_Logic();

        Statistics();
        MainMenu();
        ChooseFunction();

         switch(Choose){
         case 1:
            // Digging consumes energy and hunger, produces mines
            Mines += PickaxePower * 3;
            Energy -= 10;
            Hunger -= 10;
            break;

         case 2:
            // Selling mines
            std::cout << "[1 Mine = $100] Enter the amount you will sell: ";
            std::cin >> Choose;

             if (Choose <= Mines){
                 Mines -= Choose;
                 Money += Choose * 100;
             }
             else {
                std::cout << "Insufficient mine!" << std::endl;
             }
             break;

         case 3:
            // Upgrade pickaxe power
            std::cout << "[$50 = 1 Power] Enter the amount: ";
            std::cin >> Choose;

             if (Choose <= Money){
                 Money -= Choose;
                 PickaxePower += Choose / 50;
             }
             else {
                std::cout << "Insufficient money!" << std::endl;
             }
             break;

         case 4:
            // Eating restores hunger
            std::cout << "[$2 = 10 Hunger] Enter the amount: ";
            std::cin >> Choose;

             if (Choose <= Money){
                 Money -= Choose;
                 Hunger += Choose * 5;
             }
             else {
                std::cout << "Insufficient money!" << std::endl;
             }
             break;

         case 5:
            // Rest restores energy
            Energy += 100;
            break;

         case 6:
            // Exit
            return 0;

         default: // Invalid Choice
            std::cout << "Invalid Selection!" << std::endl;
            break;
         }
     }
}
