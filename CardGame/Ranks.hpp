//
//  Ranks.hpp
//  War
//
//  Created by Clay Jackson on 10/14/19.
//  Copyright © 2019 Clay Jackson. All rights reserved.
//

#ifndef Ranks_hpp
#define Ranks_hpp

// System
#include <iostream>

namespace CardGame {

enum class Ranks {
    Two,
    Three,
    Four,
    Five,
    Six,
    Seven,
    Eight,
    Nine,
    Ten,
    Jack,
    Queen,
    King,
    Ace
};

int ConvertRanksToInt(Ranks rank);

Ranks ConvertIntToRanks(int intRank);

void PrintRank(Ranks rank);

void PrintRank(int intRank);

}
#endif /* Ranks_hpp */
