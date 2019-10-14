//
//  PlayingCard.hpp
//  War
//
//  Created by Clay Jackson on 10/13/19.
//  Copyright © 2019 Clay Jackson. All rights reserved.
//

#ifndef PlayingCard_hpp
#define PlayingCard_hpp

#include <stdio.h>

namespace War {
class PlayingCard {
public:
    PlayingCard();
    ~PlayingCard();
    char suit;
    char rank;
};
}
#endif /* PlayingCard_hpp */
