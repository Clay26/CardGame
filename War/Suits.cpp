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
    if (suit == Suits::C) {
        return 'C';
    }
    else if (suit == Suits::D) {
        return 'D';
    }
    else if (suit == Suits::H) {
        return 'H';
    }
    else if (suit == Suits::S) {
        return 'S';
    }
    else if (suit == Suits::B) {
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
        return Suits::C;
    }
    else if (charSuit == 'D') {
        return Suits::D;
    }
    else if (charSuit == 'H') {
        return Suits::H;
    }
    else if (charSuit == 'S') {
        return Suits::S;
    }
    else if (charSuit == ' ') {
        return Suits::B;
    }
    else {
        std::cout << "Invalid Suit" << std::endl;
//        exit(2);
        return Suits::B;
    }
}
}
