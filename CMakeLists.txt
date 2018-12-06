cmake_minimum_required(VERSION 3.12)
project(blackjack)

set(CMAKE_CXX_STANDARD 17)

add_executable(blackjack main.cpp card.cpp card.h deck.cpp deck.h player.cpp player.h)