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
    int getRank();
    char getSuit();
    void setRank(int newRank);
    void setSuit(char newSuit);
    void setSuit(int newSuit);
    
private:
    Suits suit;
    Ranks rank;
};
}
#endif /* PlayingCard_hpp */
