//
//  Player.cpp
//  War
//
//  Created by Clay Jackson on 10/16/19.
//  Copyright © 2019 Clay Jackson. All rights reserved.
//

#include "Player.hpp"

namespace CardGame {

Player::Player() {
    score = 0;
    playersDeck = CardGame::Deck(0);
    playersHand = CardGame::Deck(0);
}

Player::~Player() {
    
}

void Player::AddCardToDeck(CardGame::PlayingCard newCard) {
    this->playersDeck.AddCard(newCard);
    return;
}

void Player::AddCardToHand(CardGame::PlayingCard newCard) {
    this->playersHand.AddCard(newCard);
    return;
}

int Player::getScore() {
    return this->score;
}

CardGame::Deck Player::getPlayersDeck() {
    return this->playersDeck;
}

CardGame::Deck Player::getPlayersHand() {
    return this->playersHand;
}

void Player::setScore(int newScore) {
    this->score = newScore;
    return;
}

void Player::setPlayersDeck(CardGame::Deck newCards) {
    this->playersDeck = newCards;
    return;
}

void Player::setPlayersHand(CardGame::Deck newCards) {
    this->playersHand = newCards;
    return;
}
}
