#include "Miner.h"
#include <iostream>

Miner::Miner() {
    // Constructor (initial values ​​of units)
        money_ = 100.0f;

        health_ = 100;
        energy_ = 100;
        hunger_  = 100;
        thirst_ = 100;
}

// Money spending method
void Miner::spendMoney(int amount) {
    if (money_ >= amount) { money_ -= amount; }
}

// ========================
// get value-amount methods
// ========================
int Miner::getMoney() const {  return money_; }

int Miner::getHealth() const { return health_; }

int Miner::getEnergy() const { return energy_; }

int Miner::getHunger() const { return hunger_; }

int Miner::getThirst() const { return thirst_; }

// ========================
// add value-amount methods
// ========================
void Miner::addMoney(int amount) {
    if (money_ >= 0.0f && amount > 0.0) { money_ += amount; }
}

void Miner::addHealth(int value) {
    if (health_ >= 0 && value > 0) { health_ += value; }
}

void Miner::addEnergy(int value) {
    if (energy_ >= 0 && value > 0) { energy_ += value;}
}

void Miner::addHunger(int value) {
    if (hunger_ >= 0 && value > 0) { hunger_ += value; }
}

void Miner::addThirst(int value) {
    if (thirst_ >= 0 && value > 0) { thirst_ += value; }
}

// ===========================
// remove value-amount methods
// Precautions are taken to prevent it from taking negative and excessive values.
// ===========================
void Miner::removeMoney(int amount) {
    if (money_ >= amount) { money_ -= amount; }
    if (money_ < 0.0f) { money_ = 0.0f; }
}

void Miner::removeHealth(int value) {
    if (health_ >= value) { health_ -= value; }
    if (health_ < 0) { health_ = 0; }
    if (health_ > 100) { health_ = 100; }
}

void Miner::removeEnergy(int value) {
    if (energy_ >= value) { energy_ -= value; }
    if (energy_ < 0) { energy_ = 0; }
    if (energy_ > 100) { energy_ = 100; }
}

void Miner::removeHunger(int value) {
    if (hunger_ >= value) { hunger_ -= value; }
    if (hunger_ < 0) { hunger_ = 0; }
    if (hunger_ > 100) { hunger_ = 100; }
}

void Miner::removeThirst(int value) {
    if (thirst_ >= value) { thirst_ -= value; }
    if (thirst_ < 0) { thirst_ = 0; }
    if (thirst_ > 100) { thirst_ = 100; }
}