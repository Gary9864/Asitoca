#ifndef HEADER_H
#define HEADER_H

#include <iostream>
using namespace std;

// Structure for decisions
struct Decision {
    string text;
    string consequence;
};

// Structure for a level
struct Level {
    string situation;
    Decision decisions[3];
    string reward;
    int winningOption; // index (0, 1, 2)
};

// Structure for adventure
struct Adventure {
    string name;
    Level levels[5];
};

// Configuration for minigames: enable and type per level (5 levels)
struct MinigameConfig {
    bool activate[5];  // true if there is a minigame at that level
    int type[9];       // minigame type: 1=Memory, 2=Treasure, 3=Simon, 4=Count etc
};

// Global variables

extern bool adventuresPlayed[3];
extern string playerRewards[20];
extern int rewardCount;
extern string playerName;

// Function declarations
//function to add reward
void addReward(string reward);
//function to show rewards
void showRewards();
//function to play level
bool playLevel(const Level& level, const MinigameConfig& config, int levelIndex);
//function to play adventure
void playAdventure(const Adventure& adventure, const MinigameConfig& config);
//function to try playing adventure, to validate how many times an adventure has been played
void tryPlayAdventure(const Adventure& adventure, int adventureIndex, const MinigameConfig& config);
//function for game introduction
void gameIntroduction();
//function to save progress using files
void saveProgress(string name, string adventures, string rewards);
//read progress and call it
void readProgress();
//functions to configure the minigames
MinigameConfig getConfigNerysia();
MinigameConfig getConfigInfernum();
MinigameConfig getConfigThornia();

// Minigame declarations
void minigameMemory();
void minigameTreasure();
void minigameSimon();
void minigameCount();
string minigameDuel();
void minigameFishing();
void minigameLostObjects();
void openChest();
void chooseDoor();

// Adventure declarations
extern Adventure nerysia;
extern Adventure infernum;
extern Adventure thornia;

#endif
