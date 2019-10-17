//
//  Player.cpp
//  War
//
//  Created by Clay Jackson on 10/16/19.
//  Copyright © 2019 Clay Jackson. All rights reserved.
//

#include "Player.hpp"

namespace CardGame {

Player::Player() {
    score = 0;
    playersCards = CardGame::Deck(0);
}

Player::~Player() {
    
}
}
