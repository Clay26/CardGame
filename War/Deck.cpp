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
    numberOfCards = 52;
}

Deck::~Deck() {
}

int Deck::getNumberOfCards() {
    return numberOfCards;
}
void Deck::setNumberOfCards(int numCards) {
    numberOfCards = numCards;
    return;
}
}
