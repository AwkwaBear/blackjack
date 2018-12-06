//
// Created by Anthony Gasbarro on 10/13/18.
//

#include "deck.h"
#include "player.h"


deck::deck(){
    makeDeck();
}

void deck::makeDeck(void){
    for(int i = 1; i <= 52; i++){

        this->topdeck.push_back(card(i));
    }
}

void deck::readDeck(void){
    std::vector<card>::iterator it;
    int count = 0;

    for(it = topdeck.begin(); it < topdeck.end(); it++){
        std::cout << "card is: " << it->getFace() << " of " << it->getSuit() << " with value = " << it->getValue() << std::endl;
        count++;
    }
    std::cout << "Total Cards: " << count << std::endl;
}

void deck::shuffleDeck(void){
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

    std::shuffle(topdeck.begin(),topdeck.end(),std::default_random_engine(seed));
}

void deck::dealCard(class player x){
    card draw = *topdeck.end();
    topdeck.pop_back();
    x.takeCard(draw);
}
