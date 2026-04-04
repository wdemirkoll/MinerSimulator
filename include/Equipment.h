#ifndef EQUIPMENT_H
#define EQUIPMENT_H

#include <iostream>

class Equipment {
private:
    int processedMine_;

    float diggingMultiplier_;
    float moneyMultiplier_;

public:
    // Constructor
    Equipment();
    
    // Processed mine spending method
    void spendProcessedMine(int amount);

    // get value-amount methods
    int getProcessedMine() const;
    float getDiggingMultiplier() const;
    float getMoneyMultiplier() const;
    
    // add value-amount methods
    void addProcessedMine(int amount);

    float addDiggingMultiplier(float value);
    float addMoneyMultiplier(float value);
};

#endif // EQUIPMENT_H