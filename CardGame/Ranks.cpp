//
//  Ranks.cpp
//  War
//
//  Created by Clay Jackson on 10/14/19.
//  Copyright © 2019 Clay Jackson. All rights reserved.
//

// System
#include <iostream>

// War
#include "Ranks.hpp"

namespace CardGame {

int ConvertRanksToInt(Ranks rank) {
    if (rank == Ranks::Two) {
        return 2;
    }
    else if (rank == Ranks::Three) {
        return 3;
    }
    else if (rank == Ranks::Four) {
        return 4;
    }
    else if (rank == Ranks::Five) {
        return 5;
    }
    else if (rank == Ranks::Six) {
        return 6;
    }
    else if (rank == Ranks::Seven) {
        return 7;
    }
    else if (rank == Ranks::Eight) {
        return 8;
    }
    else if (rank == Ranks::Nine) {
        return 9;
    }
    else if (rank == Ranks::Ten) {
        return 10;
    }
    else if (rank == Ranks::Jack) {
        return 11;
    }
    else if (rank == Ranks::Queen) {
        return 12;
    }
    else if (rank == Ranks::King) {
        return 13;
    }
    else if (rank == Ranks::Ace) {
        return 14;
    }
    else {
        std::cout << "Invalid Card Rank" << std::endl;
        return 0;
    }
}

Ranks ConvertIntToRanks(int intRank) {
    if (intRank == 2) {
        return Ranks::Two;
    }
    else if (intRank == 3) {
        return Ranks::Three;
    }
    else if (intRank == 4) {
        return Ranks::Four;
    }
    else if (intRank == 5) {
        return Ranks::Five;
    }
    else if (intRank == 6) {
        return Ranks::Six;
    }
    else if (intRank == 7) {
        return Ranks::Seven;
    }
    else if (intRank == 8) {
        return Ranks::Eight;
    }
    else if (intRank == 9) {
        return Ranks::Nine;
    }
    else if (intRank == 10) {
        return Ranks::Ten;
    }
    else if (intRank == 11) {
        return Ranks::Jack;
    }
    else if (intRank == 12) {
        return Ranks::Queen;
    }
    else if (intRank == 13) {
        return Ranks::King;
    }
    else if (intRank == 14) {
        return Ranks::Ace;
    }
    else {
        std::cout << "Invalid Card Rank" << std::endl;
        return Ranks::Two;
    }
}

void PrintRank(Ranks rank) {
    if (rank == Ranks::Two) {
        std::cout << "2";
    }
    else if (rank == Ranks::Three) {
        std::cout << "3";
    }
    else if (rank == Ranks::Four) {
        std::cout << "4";
    }
    else if (rank == Ranks::Five) {
        std::cout << "5";
    }
    else if (rank == Ranks::Six) {
        std::cout << "6";
    }
    else if (rank == Ranks::Seven) {
        std::cout << "7";
    }
    else if (rank == Ranks::Eight) {
        std::cout << "8";
    }
    else if (rank == Ranks::Nine) {
        std::cout << "9";
    }
    else if (rank == Ranks::Ten) {
        std::cout << "10";
    }
    else if (rank == Ranks::Jack) {
        std::cout << "J";
    }
    else if (rank == Ranks::Queen) {
        std::cout << "Q";
    }
    else if (rank == Ranks::King) {
        std::cout << "K";
    }
    else if (rank == Ranks::Ace) {
        std::cout << "A";
    }
    return;
}

void PrintRank(int intRank) {
    if (intRank == 2) {
        std::cout << "2";
    }
    else if (intRank == 3) {
        std::cout << "3";
    }
    else if (intRank == 4) {
        std::cout << "4";
    }
    else if (intRank == 5) {
        std::cout << "5";
    }
    else if (intRank == 6) {
        std::cout << "6";
    }
    else if (intRank == 7) {
        std::cout << "7";
    }
    else if (intRank == 8) {
        std::cout << "8";
    }
    else if (intRank == 9) {
        std::cout << "9";
    }
    else if (intRank == 10) {
        std::cout << "10";
    }
    else if (intRank == 11) {
        std::cout << "J";
    }
    else if (intRank == 12) {
        std::cout << "Q";
    }
    else if (intRank == 13) {
        std::cout << "K";
    }
    else if (intRank == 14) {
        std::cout << "A";
    }
    return;
}
}
