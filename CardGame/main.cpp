//
//  main.cpp
//  War
//
//  Created by Clay Jackson on 10/13/19.
//  Copyright © 2019 Clay Jackson. All rights reserved.
//

// System
#include <iostream>

// War
#include "Deck.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    CardGame::PlayingCard card;
    card.setSuit('C');
    CardGame::Deck hand(15);
    hand.PrintHand();
    hand.Shuffle();
    hand.PrintHand();
    CardGame::Deck handOne(0);
    handOne.PrintHand();
    CardGame::Deck handTwo(0);
    handTwo.PrintHand();
    hand.Deal(handOne, handTwo);
    hand.PrintHand();
    handOne.PrintHand();
    handTwo.PrintHand();
    return 0;
}
