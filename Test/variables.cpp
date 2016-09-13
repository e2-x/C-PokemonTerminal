//
//  variables.cpp
//  Test
//
//  Created by Edwin Tejeda on 6/9/16.
//  Copyright © 2016 Edwin Tejeda. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctime>

// Getters
std::string Charmander::getPokeType(){ return pokeType; }
std::string Charmander::getPokeName(){ return pokeName; }

std::string Squirtle::getPokeType(){ return pokeType; }
std::string Squirtle::getPokeName(){ return pokeName; }

std::string Bulbasaur::getPokeType(){ return pokeType; }
std::string Bulbasaur::getPokeName(){ return pokeName; }

void GameStuff::startFight() { // Initialize fight and display message to users

    std::cout << "You have encountered a wild pokemon!" << std::endl;
    std::cout << "What will you do? (Choose an attack)" << std::endl;
    std::cout << std::endl;
}
//GameStuff::GameStuff(){ Reset(); }

int GameStuff::getPlayerHealth(){
    
    return playerHealth;
    
}
int GameStuff::getEnemyHealth() {
   
    return enemyHealth;

}
void GameStuff::Reset(){
    
    GameStuff health;
    std::cout << " Player Health: " << health.getPlayerHealth() << std::endl;
    std::cout << " Enemy Health: " << health.getEnemyHealth() << std::endl;
}
//void GameStuff::setCurrentPlayerHealth(int getAttkDmg){
//    playerHealth = getPlayerHealth() - getAttkDmg;
//}
void GameStuff::setCurrentEnemyHealth(int getAttkDmg){
    
    //enemyHealth = getEnemyHealth() - getAttkDmg;
}
std::string Charmander::getPokeSet(int choice) {
    
    pokeSet.insert(std::pair<int, std::string>(1,"Ember")); // < First attack
    pokeSet.insert(std::pair<int, std::string>(2,"Scratch")); // < Second attack
    pokeSet.insert(std::pair<int, std::string>(3,"Flame Thrower")); // < Third attack
    pokeSet.insert(std::pair<int, std::string>(4,"Fire Spin")); // < Fourth attack
    
    //std::cout << pokeAtks[1] << std::endl;
    
    return pokeSet[choice];
}

std::string Squirtle::getPokeSet(int choice) {
    
    pokeSet.insert(std::pair<int, std::string>(1,"Water Gun")); // < First attack
    pokeSet.insert(std::pair<int, std::string>(2,"Tackle")); // < Second attack
    pokeSet.insert(std::pair<int, std::string>(3,"Bubblebeam")); // < Third attack
    pokeSet.insert(std::pair<int, std::string>(4,"Scratch")); // < Fourth attack
    
    //std::cout << pokeAtks[1] << std::endl;
    
    return pokeSet[choice];
}

std::string Bulbasaur::getPokeSet(int choice) {
    
    pokeSet.insert(std::pair<int, std::string>(1,"Vine Whip")); // < First attack
    pokeSet.insert(std::pair<int, std::string>(2,"Headbutt")); // < Second attack
    pokeSet.insert(std::pair<int, std::string>(3,"Razor Leaf")); // < Third attack
    pokeSet.insert(std::pair<int, std::string>(4,"Tackle")); // < Fourth attack
    
    //std::cout << pokeAtks[1] << std::endl;
    
    return pokeSet[choice];
}

std::string GameStuff::randomPlayerPoke (){
    
    // Create array with Pokemon classes and find size of array for random number gen
    std::string ranPoke[] = {"CH","BU","SQ"};
    int pokeArrSize = sizeof(ranPoke)/sizeof(ranPoke[0]);
    
    // Get pseudorandom value depending on size of ranPoke array
    std::srand(std::time(0));
    int ranNum = rand() % pokeArrSize;
    
    return ranPoke[ranNum];
}

int GameStuff::getAttkDmg(std::string attk) {
    
    int attkChoice;

    //Bulbasaur
    attack_list["Vine Whip"] = 20;
    attack_list["Headbutt"] = 10;
    attack_list["Razor Leaf"] = 40;
    attack_list["Tackle"] = 10;
    
    //Charmander
    attack_list["Ember"] = 20;
    attack_list["Scratch"] = 10;
    attack_list["Flame Thrower"] = 40;
    attack_list["Fire Spin"] = 30;
    
    
    //Squirtle
    attack_list["Water Gun"] = 20;
    attack_list["Bubblebeam"] = 40;
    attack_list["Razor Leaf"] =30;
    attack_list["Scratch"] = 10;
    
    attkChoice = attack_list[attk];
    
    return attkChoice;
    
}
void GameStuff::displayPokeSet(){ // Display Moveset depending on which pokemon is randomly chosen
    
   Charmander CH;
   Bulbasaur BU;
   Squirtle SQ;
    
    std::string ranPlayer = randomPlayerPoke();
    
    if (ranPlayer == "CH") {
        
        std::cout << "You send out " << CH.getPokeName() << "!" << std::endl;
        std::cout << std::endl;
        std::cout << "1) " << CH.getPokeSet(1) << std::endl;
        std::cout << "2) " << CH.getPokeSet(2) << std::endl;
        std::cout << "3) " << CH.getPokeSet(3) << std::endl;
        std::cout << "4) " << CH.getPokeSet(4) << std::endl;

    }
    else if (ranPlayer == "BU") {
        
        std::cout << "You send out " << BU.getPokeName() << "!" << std::endl;
        std::cout << std::endl;
        std::cout << "1) " << BU.getPokeSet(1) << std::endl;
        std::cout << "2) " << BU.getPokeSet(2) << std::endl;
        std::cout << "3) " << BU.getPokeSet(3) << std::endl;
        std::cout << "4) " << BU.getPokeSet(4) << std::endl;

    }
    else if (ranPlayer == "SQ") {
        
        std::cout << "You send out " << SQ.getPokeName() << "!" << std::endl;
        std::cout << std::endl;
        std::cout << "1) " << SQ.getPokeSet(1) << std::endl;
        std::cout << "2) " << SQ.getPokeSet(2) << std::endl;
        std::cout << "3) " << SQ.getPokeSet(3) << std::endl;
        std::cout << "4) " << SQ.getPokeSet(4) << std::endl;
        
    }
    
    std::cout << std::endl;
}

void GameStuff::chooseAtk() {
    
    std::string pokeName, pokeSet;
    std::string currentPoke = randomPlayerPoke();
    int attkDmg;
    
    displayPokeSet(); // Display moveset
    
    std::cout << "Please choose an attack! (1-4) : ";
    int choice;
    std::cin >> choice;
    
    if (currentPoke == "BU") {
        
        Bulbasaur BU;
        pokeName = "Bulbasaur";
        pokeSet = BU.getPokeSet(choice);
        attkDmg = getAttkDmg(pokeSet);
    }
    else if (currentPoke == "CH") {
        
        Charmander CH;
        pokeName = "Charmander";
        pokeSet = CH.getPokeSet(choice);
        attkDmg = getAttkDmg(pokeSet);
    }
    else  {
        
        Squirtle SQ;
        pokeName = "Squirtle";
        pokeSet = SQ.getPokeSet(choice);
        attkDmg = getAttkDmg(pokeSet);
    }
    
    
    if (choice < 1 || choice > 4) {
        
        std::cout << "Please enter a valid choice! " << std::endl;
        
    }
    else {
        
        std::cout << pokeName << " used " << pokeSet << "(" << attkDmg << ")" << "!" <<  std::endl;
    }
    
}

void GameStuff::enemyAtk(){
 
    std::string currentPoke = randomPlayerPoke();
}
