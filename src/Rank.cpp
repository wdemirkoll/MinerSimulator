#include "Rank.h"
#include "string"

// Initial values ​​(Constructor)
Rank::Rank() {
    xp_ = 0;
    level_ = 0;
}

// =========================
// Get amount-number methods
// =========================
std::string Rank::getRank() const {
    int rankIndex = level_ / 3;

     if (rankIndex < 0) { return ranks_[0]; }
     if (rankIndex >= RANK_COUNT) { return ranks_[RANK_COUNT - 1]; }
     return ranks_[rankIndex];
}

int Rank::getXP() const { return xp_; }

int Rank::getLevel() const { return level_; }

// =========================
// Add amount-number method
// =========================
void Rank::addXP(int amount) {
    xp_ += amount;

    // You can level up a maximum of 1 level at a time 
    // And experience points reset when you reach 100
    if (xp_ >= 100) {
        level_++;
        xp_ = 0;

        if (level_ / 3 >= RANK_COUNT) {
            level_ = (RANK_COUNT * 3) - 1;
        }
    }

    if (xp_ < 0) {
        xp_ = 0;
    }
}
