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
    suit = Suits::Blank;
    rank = Ranks::Two;
}

PlayingCard::~PlayingCard() {
}

int PlayingCard::getRank() {
    return ConvertRanksToInt(rank);
}

char PlayingCard::getSuit() {
    return ConvertSuitsToChar(suit);
}

void PlayingCard::setRank(int newRank) {
    rank = ConvertIntToRanks(newRank);
    return;
}

void PlayingCard::setSuit(char newSuit) {
    suit = ConvertCharToSuits(newSuit);
    return;
}

void PlayingCard::setSuit(int newSuit) {
    suit = ConvertIntToSuits(newSuit);
    return;
}
}
