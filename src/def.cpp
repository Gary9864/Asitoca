#include "header.h"
#include <iostream>
#include <fstream>
#include <conio.h>

// Global variables
bool adventuresPlayed[3] = {false, false, false};
string playerRewards[20];
int rewardCount = 0;
string playerName;

// Defined adventures

// adventure one

Adventure nerysia = {
   "Nerysia (Water World)",
    {
        // Level 1 – Coral Reef
        { "The pufferfish have found their home destroyed. They are furious and are attacking the octopus village.\nWhat weapon do you recommend using?",
          { 
              {"Their spines", "The fish get confused and stop attacking for a moment."},
              {"A sword", "The sword is useless underwater, you waste time."},
              {"The octopus ink", "The ink blinds them and they manage to escape in time."}
          },
          "Ancient Ink", 1 },

        // Level 2 – Eternal Algae Caves
        { "As you move through a cave covered in glowing algae, you hear a hypnotic singing. You realize it comes from dark mermaids trying to distract you to steal your life energy.",
          {
              {"You follow the singing, maybe it leads to a clue", "You get hypnotized and lose energy."},
              {"You cover your ears with algae", "You resist the song and move forward successfully."},
              {"You throw a stone toward the sound to distract them", "You confuse them and manage to escape unseen."}
          },
          "Luminous Pearl", 2 },

        // Level 3 – Abyssal Trench of Oblivion
        { "You reach an area so deep that light disappears. You find an old fish trapped in a black coral cage begging for help.",
          {
              {"You free it without asking", "It was a trap, the fish betrays you."},
              {"You ask questions before deciding", "The fish shows wisdom and gives you an ancient fragment."},
              {"You ignore it and move on", "You feel guilty, but avoid trouble."}
          },
          "Ancient Coral Fragment", 2 },

        // Level 4 – Fields of Wild Currents
        { "A violent current pulls you, and you must choose which creature to ally with to help you swim safely.",
          {
              {"A giant squid", "It helps you, but demands a favor in return."},
              {"A group of sea turtles", "They transport you calmly and safely."},
              {"A very fast lone dolphin", "You arrive quickly but get separated from the group."}
          },
          "Current Amulet", 2 },

        // Level 5 – The Palace of Corruption
        { "You reach the heart of darkness: a gigantic creature made of oil and shadows is corrupting the water.\nHow do you decide to face it?",
          {
              {"You use a sacred pearl you found on the way", "The creature weakens and retreats."},
              {"You summon all the creatures you helped before", "They fight with you and manage to contain it."},
              {"You use your own life energy as a last resort", "The creature disappears, but you're left badly injured."}
          },
          "Heart of Nerysia", 1 }
    }
    
};


// adventure two
Adventure infernum = {
    "Infernum (Fire World)",
    {
        {"Level 1 - Ash Plains: The ground shakes under your feet, fiery lizards have started attacking caravans carrying volcanic rock. What do you do to save the merchants?",
             {{"You try to talk to the lizards", "The lizards don’t understand and get even more agitated."},
              {"You throw frozen water at them", "The lizards get angry and start attacking everyone."},
              {"You distract them with a bright torch", "The lizards get confused by the light and stay still, saving the merchants."}},
        "Lava Sword", 2},

        {"Level 2 - Burning Thunder Canyon: You find a crack with poisoned steam that is affecting lava birds. Some surround you confused. What decision do you take to help the birds?",
             {{"You cover the crack with rocks", "The pressure causes an explosion and everyone dies." },
             {"You guide the birds out of the smoke", "You save the birds and they thank you with food to recharge energy."},
             {"You confront the birds thinking they are hostile", "The birds attack you."}},
        "Enchanted Fire Heart", 1},

        {"Level 3 - Sleeping Volcano: You climb a volcano to investigate its energy. You discover a crack leading to a secret cave, but it is protected by magma golems. How do you access the secret cave?",
             {{"You imitate the golems' movements", "They confuse you for one of them and let you pass."},
             {"You camouflage yourself with volcanic mud", "The mud burns you and you die."},
             { "You wait for them to sleep to pass", "You fall asleep and the golems capture you."}},
        "Magma Scepter", 0}, 

        {"Level 4 - Eternal Lava River: To cross to the next territory, you must cross a lava river on platforms that melt over time. How do you cross the river?",
             {{"A shell from a fireproof beetle", "You protect yourself from the lava and cross safely."},
             {"Jump as fast as possible", "You get burned because you don’t jump fast enough."},
             {"Use an ancient ice fragment to freeze parts of the lava", "The ice melts too fast and you fall into the river."}},
       "Volcanic Rock Shield", 0},

       {"Level 5 - Core of the Burning Colossus: Deep in the world, you face the Burning Colossus, a creature that seems made of the planet’s core. It is mad. How do you defeat the colossus?",
             {{"You use a special mineral that absorbs heat", "The mineral is weak and melts."},
              {"You make it remember who it was before with an ancient artifact", "The colossus is moved and sleeps peacefully."},
              {"You try to fight the colossus", "The colossus is too strong and crushes you."}},
        "Colossus Amulet", 1},
     }                  
};

Adventure thornia = {// declare the adventure to which we are going to add data

    "thornia (The Forgotten World)",// name of the adventure as required by the structure

    {

// situation 1 (level 1)

        { "You wake up in ruins covered with fog and a statue emits a sound.", 
// decision and consequence

          { {"Touch the statue", "You are paralyzed for a few seconds and lose time."}, 

            {"Touch the triangle-shaped symbol on the wall", "A portal of light appears before you."}, 

            {"Walk into the fog", "You hear whispers and move away."}
          },
// prize obtained and the option that gives you that prize

          "Abyssal Shield", 1 },
// repeat the structure for the following levels


        { "You leave the cave through the portal and find a tower that whispers your thoughts without stopping.",
          { {"You remain silent.", "You cannot withstand the voice of your thoughts and lose sanity."},
            {"You climb to the top of the tower.", "You find nothing and return."},
            {"You investigate under the tower near the whispers.", "You find an underground entrance and a chest."}
          },
          "Worn Axe", 2 },
        { "Descending, you find a room with 3 hooded statues with different symbols.",
          { {"Touch the first statue with a square symbol.", "You activate a trap and didn’t escape in time."},
            {"Touch the second statue with a circular symbol.", "A fog appears and you faint."},
            {"Touch the third statue with a triangular symbol.", "The statue moves, you take its hood and a path with 3 doors opens behind it."}
          },
          "Old Hood.", 2 },
        { "You follow the path and find a dark room full of weapons with debris and symbols on the walls.",
          { {"Investigate the debris.", "When you approach the debris, you find a book and the runes activate with the hood, revealing a door."},
            {"Return to the previous room.", "You achieve nothing."},
            {"Investigate the weapons.", "You trip and get stabbed humiliatingly by a sword."}
          },
          "Unknown Book.", 0 },
        { "After crossing the door, you enter a chamber lit by floating crystals. In the center, the Guardian of Oblivion awakens from its slumber. Only one action can weaken it to have a chance to defeat it.",
          { {"Attack directly with the axe.", "The guardian blocks your attack and throws you against the wall, leaving you injured."},
            {"Read aloud the inscription of the unknown book.", "The room shakes. The guardian seems weakened and staggers but remains standing."},
            {"Cover yourself with the old hood.", "The hood burns on contact with the guardian's energy and you are left unprotected."}
          },
          "Totem of Immortality", 1 }
}
};


// Functions

//add reward if won
void addReward(string reward) {
    if (rewardCount < 20) {// if the quantity is less than 20 rewards

        playerRewards[rewardCount++] = reward; // store it in the array adding to the rewards

    }
}
//display obtained rewards
void showRewards() {
    cout << "\n--- Obtained Rewards ---\n";
    if (rewardCount == 0) {// if the number of rewards is zero, show the message

        cout << "You have no rewards yet.\n";
    } else {
        for (int i = 0; i < rewardCount; i++) { // if there are rewards, then iterate through the array and show the rewards won

            cout << i + 1 << ". " << playerRewards[i] << "\n";
        }
    }
    cout << endl;
}
//save progress
void saveProgress() {
    ofstream file("src./progress.txt");
    if (file.is_open()) {
        file << playerName << endl;
        
        // Count played adventures
        int totalAdventures = 0;
        for (int i = 0; i < 3; i++) {
            if (adventuresPlayed[i]) {
                totalAdventures++;
            }
        }
        file << totalAdventures << endl;

        // Save adventure names
        if (adventuresPlayed[0]) file << "Nerysia (Water World)" << endl;
        if (adventuresPlayed[1]) file << "Infernum (Fire World)" << endl;
        if (adventuresPlayed[2]) file << "thornia (The Forgotten World)" << endl;

        // Save rewards
        file << rewardCount << endl;
        for (int i = 0; i < rewardCount; i++) {
            file << playerRewards[i] << endl;
        }

        file.close();
        cout << "\nProgress saved successfully.\n";
    } else {
        cout << "Could not open file to save.\n";
    }
}//show progress
void showProgress() {
    ifstream file("src/progress.txt");
    if (file.is_open()) {
        string line;
        getline(file, playerName);
        cout << "\nName: " << playerName << endl;

        getline(file, line);
        int adventures = stoi(line);
        cout << "Adventures played: " << adventures << endl;

        cout << "\n--- Played Adventures ---\n";
        for (int i = 0; i < adventures; i++) {
            getline(file, line);
            cout << i + 1 << ". " << line << endl;
        }

        getline(file, line);
        rewardCount = stoi(line);

        cout << "\n--- Obtained Rewards ---\n";
        if (rewardCount == 0) {
            cout << "You have no rewards yet.\n";
        } else {
            for (int i = 0; i < rewardCount; i++) {
                getline(file, playerRewards[i]);
                cout << i + 1 << ". " << playerRewards[i] << endl;
            }
        }

        file.close();
    } else {
        cout << "Could not open the file to read progress.\n";
    }
}

// Mini-games placeholders

string minigameDuel() {
    char runes[5] = {'A', 'S', 'D', 'F', 'J'};
    int position = 0;

    cout << "\n--- Minigame: Rune Duel ---\n";
    cout << "Instructions: A letter (A, S, D, F or J) will be shown.\n";
    cout << "Press that key. 4 hits = victory, 2 misses = restart.\n";

    while (true) { // Repeat until the player wins

        int hits = 0;
        int misses = 0;
        position = 0;

        while (hits < 4 && misses < 2) {
            char rune = runes[position];
            position = (position + 1) % 5;

            cout << "\nEnemy rune: " << rune << "\n";
            char key;
             // // VALIDATION: repeat until a non-number is entered

            while (true) {
                cout << "Press the correct key: ";
                key = _getch();
                cout << key << endl;

                if (key >= '0' && key <= '9') {
                    cout << "You cannot use numbers. Try again.\n";
                } else {
                    break;  // Exit the while loop if the input is not a number

                }
            }

            if (key == rune || key == rune + 32) {
                cout << "Correct!\n";
                hits++;
            } else {
                cout << "You missed!\n";
                misses++;
            }

            cout << "Hits: " << hits << " | Misses: " << misses << "\n";
        }

        if (hits == 4) {
            cout << "\n You have won the rune duel!\n";
            return "";
        } else {
            cout << "\n You missed... the duel starts again.\n";
        }
    }
}
//Minigame Nerysia for level 2

void minigameFishing() {
    int x = rand() % 3;
    int y = rand() % 3;

    int tryX, tryY;
    string input;

    cout << "\n--- Minigame: Fishing in Crystal Waters ---\n";
    cout << "Guess at what point (x, y) the fish is (values between 0 and 2):\n";

    // Validate X
    while (true) {
        cout << "Enter X coordinate: ";
        cin >> input;

        bool isNumber = true;
        for (char c : input) {
            if (!isdigit(c)) {
                isNumber = false;
                break;
            }
        }

        if (isNumber) {
            tryX = stoi(input);
            if (tryX >= 0 && tryX <= 2) break;
        }

        cout << "Invalid input. Enter a number between 0 and 2.\n";
    }

    // Validate Y
    while (true) {
        cout << "Enter Y coordinate: ";
        cin >> input;

        bool isNumber = true;
        for (char c : input) {
            if (!isdigit(c)) {
                isNumber = false;
                break;
            }
        }

        if (isNumber) {
            tryY = stoi(input);
            if (tryY >= 0 && tryY <= 2) break;
        }

        cout << "Invalid input. Enter a number between 0 and 2.\n";
    }

    if (tryX == x && tryY == y) {
        cout << "You caught the golden fish!\n";
    } else {
        cout << "Nothing here... The fish was at (" << x << ", " << y << ")\n";
    }

    cout << "Minigame finished.\n";
}



// Minigame Nerysia for level 4
void minigameLostObjects() {
    char objects[5] = {'F', 'R', 'F', 'L', 'T'}; // 'F' is repeated
    char answer;

    cout << "\n--- Minigame: Lost Objects ---\n";
    cout << "Look at the objects: ";
    for (int i = 0; i < 5; i++) cout << objects[i] << " ";
    cout << "\nOne of them is repeated. Which one? ";

    bool correct = false;
    while (!correct) {
        cin >> answer;

        // Validate if it's a letter
        if ((answer >= 'A' && answer <= 'Z') || (answer >= 'a' && answer <= 'z')) {
            // Check if it's the correct one
            // continuation of minigameLostObjects
            if (answer == 'F' || answer == 'f') {
                cout << "Correct! 'F' is repeated.\n";
                correct = true;
            } else {
                cout << "Wrong! Try again: ";
            }
        } else {
            cout << "Please enter a letter: ";
        }
    }

    cout << "Minigame finished.\n";
}

// Introduction function
void gameIntroduction() {
    cout << "Before we start, tell me your name: ";
    do {
        cin >> playerName;
        bool onlyLetters = true;
        for (char c : playerName) {
            if (c >= '0' && c <= '9') {
                onlyLetters = false;
                break;
            }
        }
        if (onlyLetters) break;
        else cout << "Name cannot contain numbers. Try again: ";
    } while (true);
}

