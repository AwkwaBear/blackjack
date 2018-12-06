//
// Created by Anthony Gasbarro on 10/13/18.
//

#include "player.h"

player::player(std::string n): name(n){}


void player::readHand() {
    std::vector<card>::iterator it;
    int count = 0;

    for(it = hand.begin(); it < hand.end(); it++){
        std::cout << "card is: " << it->getFace() << " of " << it->getSuit() << " with value = " << it->getValue() << std::endl;
        count++;
    }
    std::cout << "Total Cards: " << count << std::endl;
}


/* Get hand value function determines hand overall value and
 * by iterating through hand first and counting skipping aces, then iterating again to
 * check for aces and set value to 1 or 11 accordingly */

int player::getHandValue() {
    int total = 0;
   std::vector<card>::iterator it;
   for(it = hand.begin(); it < hand.end(); it++){
       if(it->getValue() == 11){
           total += 0;
       }
       else{
           total += it->getValue();
       }
   }
    for(it = hand.begin(); it < hand.end(); it++){
        if((it->getValue() == 11) && ((total+11) > 21)){
           total += 1;
            }
        else if(it->getValue() == 11 && ((total+11) < 21 )){
            total += 11;
        }
    }
    return total;
}


/* Functon for player taking a card into their hand */
void player::takeCard(class card x) {
    std::cout << "Taking card: " << x.getFace() << " of " << x.getSuit() << std::endl;
    hand.push_back(x);

}
