#include <iostream>
#include "deck.h"
#include "card.h"

int main() {

    deck stack;
    stack.shuffleDeck();
    stack.readDeck();

    player p1 = player("John");

    stack.dealCard(p1);
    stack.dealCard(p1);

    std::cout << "Player hand is: ";
    p1.readHand();


    std::cout << "Hand value is: " << p1.getHandValue() << std::endl;





    return 0;
}