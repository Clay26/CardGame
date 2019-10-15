//
//  Suits.cpp
//  War
//
//  Created by Clay Jackson on 10/13/19.
//  Copyright © 2019 Clay Jackson. All rights reserved.
//

#ifndef Suits_hpp
#define Suits_hpp

#include <stdio.h>

namespace War {
enum class Suits {
//    C = 'C',
//    D = 'D',
//    H = 'H',
//    S = 'S',
//    B = ' '
    Clubs,
    Diamonds,
    Hearts,
    Spades,
    Blank
};

char ConvertSuitsToChar(Suits suit);

Suits ConvertCharToSuits(char charSuit);

Suits ConvertIntToSuits(int intSuit);

void PrintSuit(Suits suit);

void PrintSuit(char charSuit);

}
#endif /* Suits_hpp */
