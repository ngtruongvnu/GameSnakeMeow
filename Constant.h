#ifndef CONSTANT_H_INCLUDED
#define CONSTANT_H_INCLUDED

// General
//////////////////////
const int SPRITE_SIZE = 32;           // size cua item lay tu trong file sprite
const int SQUARES = 21;               // de chia window thanh cac o vuong
const int PADDING_TOP = 32;           // de ve cai phan mau den ben tren
const int PADDING_SIDES = 8;          // de ve 3 cai canh

const int SCREEN_WIDTH = SPRITE_SIZE * SQUARES;                                 // chieu rong cua cai phan man choi
const int SCREEN_HEIGHT = SPRITE_SIZE * SQUARES;                                // chieu cao cua cai phan man choi
const int SCREEN_CENTRE_X = PADDING_SIDES + (SCREEN_WIDTH/2)-(SPRITE_SIZE/2);   // tam cua man choi
const int SCREEN_CENTRE_Y = PADDING_TOP + (SCREEN_HEIGHT/2)-(SPRITE_SIZE/2);    // tam cua man choi

const int WINDOW_WIDTH = SCREEN_WIDTH + 2 * PADDING_SIDES;                      // chieu rong cua window
const int WINDOW_HEIGHT = SCREEN_HEIGHT + PADDING_TOP + PADDING_SIDES;          // chieu cao cua window

const int FPS = 15;                                                             // muon nhanh hay cham thi fix chi so nay
const int FRAME_PERIOD = 1000.0f / FPS;

enum direction { stop, left, right, up, down };
direction dir { stop };

#endif // CONSTANT_H_INCLUDED
