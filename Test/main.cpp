//
//  main.cpp
//  Test
//
//  Created by Edwin Tejeda on 6/8/16.
//  Copyright © 2016 Edwin Tejeda. All rights reserved.
//

#include <iostream>
#include "main.h"

GameStuff GS;
int main() {
    
    //GS.Reset();
    
    GS.startFight(); // Start fight - Display first encounter message
    GS.chooseAtk(); // Allow user to choose an attack
    
    //while (GS.getPlayerHealth() > 0 || GS.getEnemyHealth() > 0){
    // Display randomized user pokemon
    // Allow enemy to randomly choose an attack
    // If player/enemy health reaches 0, end game else, continue.
    //}
    
       return 0;
}
