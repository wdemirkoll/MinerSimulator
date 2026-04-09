#ifndef RANK_H
#define RANK_H

#include <string>

class Rank {
private: // Miner ranks
    static const int RANK_COUNT = 25;
    std::string ranks_[RANK_COUNT] = {
        "Rookie Miner", "Rookie Miner I", "Rookie Miner II",
        "Novice Miner", "Novice Miner I", "Novice Miner II",
        "Skilled Miner", "Skilled Miner I", "Skilled Miner II",
        "Expert Miner", "Expert Miner I", "Expert Miner II",
        "Pro Miner", "Pro Miner I", "Pro Miner II",
        "Master Miner", "Master Miner I", "Master Miner II",
        "Legendary Miner", "Legendary Miner I", "Legendary Miner II",
        "King Miner", "King Miner I", "King Miner II",
        "God of the Mine"
     }; 
    
    // Requirements for promotion
    int xp_;
    int level_;

public:
    // Constructor
    Rank();
    
    // Get amount-number methods
    std::string getRank() const;

    int getXP() const;
    int getLevel() const;

    // Add amount method
    void addXP(int amount);
};

#endif // RANK_H