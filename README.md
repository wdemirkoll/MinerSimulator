# Miner Simulator

Short Description 💬
-----------------
Console-based mining simulation game — a simple, menu-driven mining simulator implemented in C++. The player digs mines, sells resources, upgrades their pickaxe, eats to restore hunger, rests to regain energy, and manages basic survival stats. The project demonstrates fundamental C++ concepts such as variables, functions and user input handling.

Announcement 📢
------------
This project is written using C++17.

Features ✅
--------
- Choose a nickname and start with a test bonus 💰  
- Dig mines to collect resources ⛏️  
- Sell collected mines for money 💵  
- Upgrade pickaxe power to increase mining efficiency 🔧  
- Eat to restore hunger 🍖  
- Rest to restore energy 💤  
- View real-time player statistics (money, mines, energy, hunger) 📊  
- Simple menu-driven CLI gameplay loop 🧭  

### Example usage / sample session 💡

A short example flow (user input shown after prompts):

```text
Enter a nickname, Miner
$5000 gift for testing the project :)

====================================
Nickname: Miner
Money: $5000
Mines: 0
Pickaxe Power: 1x
Energy: 100
Hunger: 100
====================================
[1] - Digging
[2] - Sell Mines
[3] - Upgrade Pickaxe Power
[4] - Eat
[5] - Rest
[6] - Exit
Choose: 1
// Player digs, gains mines, loses energy and hunger

Choose: 2
[1 Mine = $100] Enter the amount you will sell: 5
// Mines are sold and money increases

Choose: 3
[$50 = 1 Power] Enter the amount: 100
// Pickaxe power is upgraded

Choose: 4
[$2 = 10 Hunger] Enter the amount: 10
// Hunger is restored

Choose: 5
// Energy is fully restored

Choose: 6
// Program exits
```

### Notes and limitations ⚠️
- All player data is stored only in memory; progress is lost when the program exits.  
- Input validation is minimal; invalid or unexpected input may cause incorrect behavior.  
- Game balance values (prices, energy loss, hunger loss) are hardcoded and intended for learning purposes.  
- There is no save/load system, no difficulty scaling, and no advanced gameplay mechanics.  

### Author 👤
wdemirkoll — GitHub: @wdemirkoll

📅 January 2026
