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
    GenerateHand(3);
}

Deck::Deck(int numOfCards) {
    GenerateHand(numOfCards);
}

Deck::~Deck() {
}

void Deck::AddCard(CardGame::PlayingCard cardToAdd) {
    this->hand.insert(this->hand.begin(), cardToAdd);
    return;
}

void Deck::Deal(std::vector<CardGame::Deck*> decksToDealTo, unsigned long numCardsToDeal) {
    unsigned long numDecksToDealTo = decksToDealTo.size();
    unsigned long numCards = this->getNumberOfCards();
    
    if (numDecksToDealTo * numCardsToDeal < numCards) {
    
        for (int i = 0; i < numCardsToDeal * numDecksToDealTo; i++) {
            decksToDealTo[i % numDecksToDealTo]->AddCard(this->hand[i]);
        }
        
        this->hand.erase(this->hand.begin(), this->hand.begin() + numCardsToDeal * numDecksToDealTo);
    }
    else {
        
        for (int i = 0; i < numCards; i++) {
            decksToDealTo[i % numDecksToDealTo]->AddCard(this->hand[i]);
        }
        this->hand.clear();
    }
    
    return;
}

void Deck::Deal(std::vector<CardGame::Deck*> decksToDealTo) {
    Deal(decksToDealTo, this->getNumberOfCards() / decksToDealTo.size());
    
    return;
}

void Deck::GenerateHand(unsigned long numOfCards) {
    int suitCount = -1;
    
    for (int i = 0; i < numOfCards; ++i) {
        PlayingCard tempCard;
        int rankCount = (i % 13) + 2;
        if (rankCount == 2) {
            suitCount++;
            suitCount %= 4;
        }
        
        tempCard.setRank(rankCount);
        tempCard.setSuit(suitCount);
        this->hand.push_back(tempCard);
    }
    
    return;
}

void Deck::PrintHand() {
    unsigned long numCards = this->getNumberOfCards();
    
    for (int i = 0; i < numCards; ++i) {
        PrintRank(this->hand[i].getRank());
        PrintSuit(this->hand[i].getSuit());
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
    unsigned long numCards = this->getNumberOfCards();
    
    for (int i = 0; i < numCards; ++i) {
        int randomCardPos = rand() % this->getNumberOfCards();
        shuffledDeck.push_back(this->hand[randomCardPos]);
        std::vector<CardGame::PlayingCard>::iterator pos = this->hand.begin() + randomCardPos;
        this->hand.erase(pos);
    }
    
    this->hand = shuffledDeck;
    return;
}

std::vector<CardGame::PlayingCard> Deck::getHand() {
    return this->hand;
}

unsigned long Deck::getNumberOfCards() {
    return this->hand.size();
}

void Deck::setHand(std::vector<CardGame::PlayingCard> newHand) {
    this->hand = newHand;
    return;
}
}
