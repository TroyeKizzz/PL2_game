//
//  Gem.hpp
//  Final project (Treasure Hunting Game)
//  TAMK, Programming Languages 2, 20i260E
//  Created by Sviatoslav Vasev on 9.4.2021.
//

#pragma once
#include "Player.hpp"

class Gem : public GameObject {
public:
    
    // Constructor
    Gem(int, int);
    
    // Interact with the player
    void interact(Player &);
};
