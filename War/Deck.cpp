//
//  Deck.cpp
//  War
//
//  Created by Clay Jackson on 10/13/19.
//  Copyright © 2019 Clay Jackson. All rights reserved.
//

// System
#include <iostream>

#include "Deck.hpp"

namespace War {

Deck::Deck() {
    numberOfCards = 3;
    
    int suitCount = -1;
    for (int i = 0; i < numberOfCards; ++i) {
        PlayingCard tempCard;
        int rankCount = (i + 2) % 15;
        if (rankCount == 2) {
            suitCount++;
        }
        
        tempCard.setRank(rankCount);
        tempCard.setSuit(suitCount);
        hand.push_back(tempCard);
    }
}

Deck::Deck(int numOfCards) {
    numberOfCards = numOfCards;
    
    int suitCount = -1;
    for (int i = 0; i < numberOfCards; ++i) {
        PlayingCard tempCard;
        int rankCount = (i % 13) + 2;
        if (rankCount == 2) {
            suitCount++;
        }
        
        tempCard.setRank(rankCount);
        tempCard.setSuit(suitCount);
        hand.push_back(tempCard);
    }
}

Deck::~Deck() {
}

void Deck::PrintHand() {
    for (int i = 0; i < numberOfCards; ++i) {
        PrintRank(hand[i].getRank());
        PrintSuit(hand[i].getSuit());
        if (i < numberOfCards - 1) {
            std::cout << ", ";
        }
        else {
            std::cout << std::endl;
        }
    }
    
    return;
}

int Deck::getNumberOfCards() {
    return numberOfCards;
}
void Deck::setNumberOfCards(int numCards) {
    numberOfCards = numCards;
    return;
}
}
