#include "Equipment.h"
#include <iostream>

Equipment::Equipment() {
    processedMine_ = 0;

    diggingMultiplier_ = 1.0f;
    moneyMultiplier_ = 1.0f;
}

// Processed mine spending method
void Equipment::spendProcessedMine(int amount) {
    if (processedMine_ > 0 && amount >= 0) { processedMine_ -= amount; }
}

// ========================
// get value-amount methods
// ========================
int Equipment::getProcessedMine() const { return processedMine_; }

float Equipment::getDiggingMultiplier() const { return diggingMultiplier_; }

float Equipment::getMoneyMultiplier() const { return moneyMultiplier_; }

// ========================
// add value-amount methods
// ========================
void Equipment::addProcessedMine(int amount) {
    if (processedMine_ >= 0 && amount > 0) { processedMine_ += amount; }
}

float Equipment::addDiggingMultiplier(float value) {
    if (value > 0) diggingMultiplier_ += value; { return diggingMultiplier_; }
}

float Equipment::addMoneyMultiplier(float value) {
    if (value > 0) moneyMultiplier_ += value; { return moneyMultiplier_; }
}