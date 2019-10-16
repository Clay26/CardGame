//
//  Deck.cpp
//  War
//
//  Created by Clay Jackson on 10/13/19.
//  Copyright © 2019 Clay Jackson. All rights reserved.
//

// System
#include <cstdlib>
#include <iostream>

#include "Deck.hpp"

namespace War {

Deck::Deck() {
    numberOfCards = 3;
    GenerateHand();
}

Deck::Deck(int numOfCards) {
    numberOfCards = numOfCards;
    GenerateHand();
}

Deck::~Deck() {
}

void Deck::Deal(Deck &deckOne, Deck &deckTwo) {
    std::vector<War::PlayingCard> handOne;
    std::vector<War::PlayingCard> handTwo;
    
    for (int i = 0; i < numberOfCards; i++) {
        if (i % 2 == 0) {
            handOne.insert(handOne.begin(),hand[i]);
        }
        else {
            handTwo.insert(handTwo.begin(),hand[i]);
        }
    }
    
    deckOne.setHand(handOne);
    deckTwo.setHand(handTwo);    
    hand.clear();
    numberOfCards = (int)hand.size();
    
    return;
}

void Deck::GenerateHand() {
    int suitCount = -1;
    for (int i = 0; i < numberOfCards; ++i) {
        PlayingCard tempCard;
        int rankCount = (i % 13) + 2;
        if (rankCount == 2) {
            suitCount++;
            suitCount %= 4;
        }
        
        tempCard.setRank(rankCount);
        tempCard.setSuit(suitCount);
        hand.push_back(tempCard);
    }
    
    return;
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

void Deck::Shuffle() {
    std::vector<War::PlayingCard> shuffledDeck;
    
    for (int i = 0; i < numberOfCards; ++i) {
        int randomCardPos = rand() % hand.size();
        shuffledDeck.push_back(hand[randomCardPos]);
        std::vector<War::PlayingCard>::iterator pos = hand.begin() + randomCardPos;
        hand.erase(pos);
    }
    
    hand = shuffledDeck;
    return;
}

int Deck::getNumberOfCards() {
    return numberOfCards;
}

void Deck::setHand(std::vector<War::PlayingCard> newHand) {
    hand = newHand;
    numberOfCards = (int)hand.size();
    return;
}

void Deck::setNumberOfCards(int numCards) {
    numberOfCards = numCards;
    return;
}
}
