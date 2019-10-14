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
    C,
    D,
    H,
    S,
    B
};

char ConvertSuitsToChar(Suits suit);

Suits ConvertCharToSuits(char charSuit);
}
#endif /* Suits_hpp */
