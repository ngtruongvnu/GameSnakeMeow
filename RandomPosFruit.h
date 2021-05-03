#ifndef RANDOMPOSFRUIT_H_INCLUDED
#define RANDOMPOSFRUIT_H_INCLUDED

#include "Snake.h"
#include "Constant.h"

// For randomly generating position of item
std::random_device rd;
std::mt19937 rng(rd());
std::uniform_int_distribution<int> posX(0, SQUARES-1); // -1 to account for sprite size
std::uniform_int_distribution<int> posY(0,SQUARES-1);
// Tham khao in https://stackoverflow.com/questions/19665818/generate-random-numbers-using-c11-random-library/19666713

#endif // RANDOMPOSFRUIT_H_INCLUDED
