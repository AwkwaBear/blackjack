//
// Created by Anthony Gasbarro on 10/13/18.
//

#ifndef BLACKJACK_CARD_H
#define BLACKJACK_CARD_H

#include<string>
#include<iostream>


class card {

private:
    int value;
    std::string suit;
    std::string face;

public:

    card();

    //card overloaded constructor
   explicit card(int i);

  //sets value of card to counting
  void setValue(int x);

  //sets suits based on num 1-52 inputs
  void setSuit(int x);

  //sets the face value of the card based on input
  void setFace(int x);

  int getValue();

  std::string getSuit();

  std::string getFace();



};


#endif //BLACKJACK_CARD_H
