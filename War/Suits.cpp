//
//  Suits.cpp
//  War
//
//  Created by Clay Jackson on 10/14/19.
//  Copyright © 2019 Clay Jackson. All rights reserved.
//

// System
#include <iostream>

// War
#include "Suits.hpp"

namespace War {

char ConvertSuitsToChar(Suits suit) {
    if (suit == Suits::Clubs) {
        return 'C';
    }
    else if (suit == Suits::Diamonds) {
        return 'D';
    }
    else if (suit == Suits::Hearts) {
        return 'H';
    }
    else if (suit == Suits::Spades) {
        return 'S';
    }
    else if (suit == Suits::Blank) {
        return ' ';
    }
    else {
        std::cout << "Invalid Suit entered" << std::endl;
//        exit(1);
        return ' ';
    }
}

Suits ConvertCharToSuits(char charSuit) {
    if (charSuit == 'C') {
        return Suits::Clubs;
    }
    else if (charSuit == 'D') {
        return Suits::Diamonds;
    }
    else if (charSuit == 'H') {
        return Suits::Hearts;
    }
    else if (charSuit == 'S') {
        return Suits::Spades;
    }
    else if (charSuit == ' ') {
        return Suits::Blank;
    }
    else {
        std::cout << "Invalid Suit" << std::endl;
//        exit(2);
        return Suits::Blank;
    }
}
}
