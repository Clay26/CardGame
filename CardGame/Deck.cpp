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

namespace CardGame {

Deck::Deck() {
    numCards = 3;
    GenerateHand();
}

Deck::Deck(int numOfCards) {
    numCards = numOfCards;
    GenerateHand();
}

Deck::~Deck() {
}

void Deck::AddCard(CardGame::PlayingCard cardToAdd) {
    hand.insert(hand.begin(), cardToAdd);
    numCards++;
    
    return;
}

void Deck::Deal(std::vector<CardGame::Deck*> decksToDealTo, int numCardsToDeal) {
    int numDecksToDealTo = (int)decksToDealTo.size();
    
    if (numDecksToDealTo * numCardsToDeal < numCards) {
    
        for (int i = 0; i < numCardsToDeal * numDecksToDealTo; i++) {
            decksToDealTo[i % numDecksToDealTo]->AddCard(hand[i]);
        }
        
        hand.erase(hand.begin(), hand.begin() + numCardsToDeal * numDecksToDealTo);
        numCards = (int)hand.size();
    }
    else {
        
        for (int i = 0; i < numCards; i++) {
            decksToDealTo[i % numDecksToDealTo]->AddCard(hand[i]);
        }
        hand.clear();
        numCards = (int)hand.size();
    }
    
    return;
}

void Deck::Deal(std::vector<CardGame::Deck*> decksToDealTo) {
    Deal(decksToDealTo, numCards / decksToDealTo.size());
    
    return;
}

void Deck::GenerateHand() {
    int suitCount = -1;
    for (int i = 0; i < numCards; ++i) {
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
    for (int i = 0; i < numCards; ++i) {
        PrintRank(hand[i].getRank());
        PrintSuit(hand[i].getSuit());
        if (i < numCards - 1) {
            std::cout << ", ";
        }
        else {
            std::cout << std::endl;
        }
    }
    
    return;
}

void Deck::Shuffle() {
    std::vector<CardGame::PlayingCard> shuffledDeck;
    
    for (int i = 0; i < numCards; ++i) {
        int randomCardPos = rand() % hand.size();
        shuffledDeck.push_back(hand[randomCardPos]);
        std::vector<CardGame::PlayingCard>::iterator pos = hand.begin() + randomCardPos;
        hand.erase(pos);
    }
    
    hand = shuffledDeck;
    return;
}

std::vector<CardGame::PlayingCard> Deck::getHand() {
    return hand;
}

int Deck::getNumberOfCards() {
    return numCards;
}

void Deck::setHand(std::vector<CardGame::PlayingCard> newHand) {
    hand = newHand;
    numCards = (int)hand.size();
    return;
}

void Deck::setNumberOfCards(int numCards) {
    numCards = numCards;
    return;
}
}
