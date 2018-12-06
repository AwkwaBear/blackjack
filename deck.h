//
// Created by Anthony Gasbarro on 10/13/18.
//

#ifndef BLACKJACK_DECK_H
#define BLACKJACK_DECK_H
#include <vector>
#include <iostream>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <random>
#include <chrono>
#include "card.h"
#include "player.h"


class deck {
private:
std::vector<card> topdeck;

public:

    deck();

void dealCard(class player x);

void makeDeck(void);

void readDeck(void);

void shuffleDeck(void);


};


#endif //BLACKJACK_DECK_H
