//
//  PlayingCard.cpp
//  War
//
//  Created by Clay Jackson on 10/13/19.
//  Copyright © 2019 Clay Jackson. All rights reserved.
//

// System
#include "iostream"

// War
#include "PlayingCard.hpp"

namespace War {
PlayingCard::PlayingCard() {
    suit = ' ';
    rank = ' ';
}

PlayingCard::~PlayingCard() {
    std::cout << "Goodbye" << std::endl;
}

char PlayingCard::getSuit() {
    return suit;
}

char PlayingCard::getRank() {
    return rank;
}

void PlayingCard::setRank(char newRank) {
    rank = newRank;
    return;
}

void PlayingCard::setSuit(char newSuit) {
    suit = newSuit;
    return;
}
}
