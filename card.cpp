//
// Created by Anthony Gasbarro on 10/13/18.
//

#include "card.h"

 card::card(int i){
    setValue(i);
    setFace(i);
    setSuit(i);

}

void card::setValue(int x){
    int val = x%13;

    if (val == 1){
        this->value = 11;
    }
    else if((val >= 2)&&(val<=10)){
        this->value = val;
    }
    else{
        this->value = 10;
    }


}

void card::setSuit(int x){

    if(x < 14){
        this->suit = "Clubs";
    }
    else if ((x >=14) && (x <= 26)){
        this->suit = "Hearts";
    }
    else if ((x >=27) && (x <=39)){
        this->suit = "Spades";
    }
    else {
        this->suit = "Diamonds";
    }


}

void card::setFace(int x){

    x = (x%13);

    if(x == 1){
        this->face = "A";
    }
    else if((x >= 2) && (x<=10)){
    this->face = std::to_string(x);
    }
    else if (x ==11){
        this->face = "J";
    }
    else if (x == 12){
        this->face = "Q";

    }
    else if (x == 0){
        this->face = "K";
    }

}

card::card() : value(0), suit("None"), face("none") {}

std::string card::getFace() {return this->face;}
std::string card::getSuit() {return this->suit;}
int card::getValue() {return this->value;}

