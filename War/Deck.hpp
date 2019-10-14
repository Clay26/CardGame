//
//  Deck.hpp
//  War
//
//  Created by Clay Jackson on 10/13/19.
//  Copyright © 2019 Clay Jackson. All rights reserved.
//

#ifndef Deck_hpp
#define Deck_hpp

// System
#include <stdio.h>
#include <vector>

// War
#include "PlayingCard.hpp"

namespace War {

class Deck {
public:
    Deck();
    ~Deck();
    int getNumberOfCards();
    void setNumberOfCards(int numCards);

private:
    std::vector<War::PlayingCard> hand;
    int numberOfCards;
};
}
#endif /* Deck_hpp */
