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

namespace CardGame {

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

Suits ConvertIntToSuits(int intSuit) {
    if (intSuit == 0) {
        return Suits::Clubs;
    }
    else if (intSuit == 1) {
        return Suits::Diamonds;
    }
    else if (intSuit == 2) {
        return Suits::Hearts;
    }
    else if (intSuit == 3) {
        return Suits::Spades;
    }
    else {
        return Suits::Blank;
    }
}

void PrintSuit(Suits suit) {
    if (suit == Suits::Clubs) {
        std::cout << "\u2663";
    }
    else if (suit == Suits::Diamonds) {
        std::cout << "\u2666";
    }
    else if (suit == Suits::Hearts) {
        std::cout << "\u2665";
    }
    else if (suit == Suits::Spades) {
        std::cout << "\u2660";
    }
    else if (suit == Suits::Blank) {
        std::cout << ' ';
    }
    return;
}

void PrintSuit(char charSuit) {
    if (charSuit == 'C') {
        std::cout << "\u2663";
    }
    else if (charSuit == 'D') {
        std::cout << "\u2666";
    }
    else if (charSuit == 'H') {
        std::cout << "\u2665";
    }
    else if (charSuit == 'S') {
        std::cout << "\u2660";
    }
    else if (charSuit == ' ') {
        std::cout << ' ';
    }
    return;
}
}
