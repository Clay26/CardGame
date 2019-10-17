//
//  Player.hpp
//  War
//
//  Created by Clay Jackson on 10/16/19.
//  Copyright © 2019 Clay Jackson. All rights reserved.
//

#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>

// CardGame
#include "Deck.hpp"

namespace CardGame {
class Player {
public:
    Player();
    ~Player();
    CardGame::Deck playersCards;
    int score;
    
private:
    
};
}
#endif /* Player_hpp */
