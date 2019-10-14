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
    War::Deck hand;
    War::PlayingCard testCard;
    std::cout << "TestCard Suit: " << testCard.getSuit() << std::endl;
    testCard.setSuit('H');
    std::cout << "TestCard Suit: " << testCard.getSuit() << std::endl;
    testCard.setSuit('P');
    std::cout << "TestCard Suit: " << testCard.getSuit() << std::endl;
    return 0;
}
