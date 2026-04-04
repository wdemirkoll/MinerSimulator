#ifndef MINER_H
#define MINER_H

#include <iostream>

class Miner {
private:
    // Player's values
    int money_;

    int health_;
    int energy_;
    int hunger_ ;
    int thirst_;

public:
    // Constructor
    Miner();
    
    // Money spending method
    void spendMoney(int amount);
    
    // get value-amount methods
    int getMoney() const;
    int getHealth() const;
    int getEnergy() const;
    int getHunger() const;
    int getThirst() const;
    
    // add value-amount methods
    void addMoney(int amount);
    void addHealth(int value);
    void addEnergy(int value);
    void addHunger(int value);
    void addThirst(int value);
    
    // remove value-amount methods
    void removeMoney(int amount);
    void removeHealth(int value);
    void removeEnergy(int value);
    void removeHunger(int value);
    void removeThirst(int value);  
};

#endif // MINER_H