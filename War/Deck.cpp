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
    
    for (int i = 0; i < numberOfCards; ++i) {
        PlayingCard tempCard;
        tempCard.setRank((i + 2) % 15);
        tempCard.setSuit(i % 4);
        hand.push_back(tempCard);
    }
}

Deck::Deck(int numOfCards) {
    numberOfCards = numOfCards;
    
    for (int i = 0; i < numberOfCards; ++i) {
        PlayingCard tempCard;
        tempCard.setRank((i + 2) % 13);
        tempCard.setSuit(i % 4);
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
