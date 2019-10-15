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
    War::PlayingCard card;
    card.setSuit('C');
    War::Deck hand(52);
    hand.PrintHand();
    hand.Shuffle();
    hand.PrintHand();
    return 0;
}
