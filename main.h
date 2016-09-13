//
//  main.h
//  Test
//
//  Created by Edwin Tejeda on 6/9/16.
//  Copyright © 2016 Edwin Tejeda. All rights reserved.
//

#ifndef main_h
#define main_h

#include "main.h"
#include <iostream>
#include <map>
struct GameStuffHealth {
    
    int playerHealth = 0;
    int enemyHealth = 0;
};
class GameStuff {
public:
   // GameStuff(); // Declare Default Constructor
//    {
//        int playerHealth = 100;
//        int enemyHealth = 100;
//    };
    // Lists
    std::map <std::string, std::string> attack_type; // < List the attacks and their types here
    std::map <std::string,int> attack_list; // < List the attacks and damage here
    std::string randomPlayerPoke ();
    //Getters
    int getAttkDmg (std::string);
    int getPlayerHealth();
    int getEnemyHealth();
    //Void
    void Reset();
    void startFight();
    void chooseAtk();
    void enemyAtk();
    void displayPokeSet();
    void setCurrentPlayerHealth(int);
    void setCurrentEnemyHealth(int);
    
private:
    int playerHealth = 100;
    int enemyHealth = 100;
//    int playerLevel = 0;
//    int enemyLevel = 0;
};

class Bulbasaur {
public:
    
    std::string getPokeName ();
    std::string getPokeType ();
    std::string getPokeSet (int);
    
private:
    
    // General Type
    std::string pokeType = "Grass";
    
    // Poke Name
    std::string pokeName = "Bulbasaur";
    
    // Attacks
    std::map<int,std::string> pokeSet; // < Use this to list the 4 attacks 1 = Vine whip
};

class Squirtle {
public:
    
    std::string getPokeName ();
    std::string getPokeType ();
    std::string getPokeSet (int);
    
private:
    
    // General Type
    std::string pokeType = "Water";
    
    // Poke Name
    std::string pokeName = "Squirtle";
    
    // Attacks
    std::map<int,std::string> pokeSet; // < Use this to list the 4 attacks 1 = Water gun
    
};

class Charmander {
public:
    
    std::string getPokeName ();
    std::string getPokeType ();
    std::string getPokeSet (int);
    
private:
    
    // General type
    std::string pokeType = "Fire"; // Pokemon type
    
    // Poke Name
    std::string pokeName = "Charmander";
    
    // Attacks
    std::map <int,std::string> pokeSet; // < Use this to list the 4 attacks 1 = Ember
 
};
#endif /* main_h */
