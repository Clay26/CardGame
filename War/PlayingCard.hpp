//
//  PlayingCard.hpp
//  War
//
//  Created by Clay Jackson on 10/13/19.
//  Copyright © 2019 Clay Jackson. All rights reserved.
//

#ifndef PlayingCard_hpp
#define PlayingCard_hpp

// System
#include <stdio.h>

// War
#include "Ranks.hpp"
#include "Suits.hpp"

namespace War {
class PlayingCard {

public:
    PlayingCard();
    ~PlayingCard();
    char getSuit();
    int getRank();
    void setSuit(char newSuit);
    void setRank(int newRank);
    
private:
    Suits suit;
    Ranks rank;
};
}
#endif /* PlayingCard_hpp */
