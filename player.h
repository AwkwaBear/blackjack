//
// Created by Anthony Gasbarro on 10/13/18.
//

#ifndef BLACKJACK_PLAYER_H
#define BLACKJACK_PLAYER_H
#include<vector>
#include <iostream>
#include<string>
#include "card.h"
#include "deck.h"


class player {
protected:
    std::string name;
    std::vector<card> hand;
public:

     player(std::string n);

    void takeCard(card x);

    void readHand();

    int getHandValue();



};


#endif //BLACKJACK_PLAYER_H
