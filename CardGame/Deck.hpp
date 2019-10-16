//
//  Deck.hpp
//  War
//
//  Created by Clay Jackson on 10/13/19.
//  Copyright © 2019 Clay Jackson. All rights reserved.
//

#ifndef Deck_hpp
#define Deck_hpp

// System
#include <stdio.h>
#include <vector>

// War
#include "PlayingCard.hpp"

namespace CardGame {

class Deck {
public:
    Deck();
    Deck(int numOfCards);
    ~Deck();
    void Deal(Deck &handOne, Deck &handTwo);
    void PrintHand();
    void Shuffle();
    std::vector<CardGame::PlayingCard> getHand();
    int getNumberOfCards();
    void setHand(std::vector<CardGame::PlayingCard> newHand);
    void setNumberOfCards(int numCards);

private:
    std::vector<CardGame::PlayingCard> hand;
    int numberOfCards;
    void GenerateHand();
};
}
#endif /* Deck_hpp */
