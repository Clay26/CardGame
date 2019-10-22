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
    void AddCardToDeck(CardGame::PlayingCard newCard);
    void AddCardToHand(CardGame::PlayingCard newCard);
    int getScore();
    CardGame::Deck getPlayersDeck();
    CardGame::Deck getPlayersHand();
    void setScore(int newScore);
    void setPlayersDeck(CardGame::Deck newCards);
    void setPlayersHand(CardGame::Deck newCards);
    
    
private:
    int score;
    CardGame::Deck playersDeck;
    CardGame::Deck playersHand;
};
}
#endif /* Player_hpp */
