#ifndef SNAKE_H_INCLUDED
#define SNAKE_H_INCLUDED

#include <stdio.h>
#include <SDL.h>
#include <SDL_mixer.h>
#include <string>
#include <fstream>

class Snake {
public:
    Snake();

    void gameSetup();
    void gameLoop();
    void drawElements();
    void gameLogic();
    void makeReset();

    bool itemCollision();   // check collision head with fruit
    bool tailCollision();   // check collision with the tail
    void updateScore();     // cap nhat diem
    void updateHighScore(); // cap nhat diem cao va hien thi len window
    void getHighScore();    // lay diem cao tu file

    void renderTexture(SDL_Texture *tex, SDL_Renderer *ren, SDL_Rect dst, SDL_Rect *clip);
    void renderTexture(SDL_Texture *tex, SDL_Renderer *ren, int x, int y, SDL_Rect *clip);
    SDL_Texture* renderText(const std::string &message, const std::string &fontFile, SDL_Color color, int fontSize, SDL_Renderer *renderer);
private:
    bool gameOver;          // bien check gameover
    bool wantPlayAgain;     // bien check xem co muon choi lai khong
    bool pause;             // bien check dung lai khi dang choi
    int score;              // diem khi dang choi
    int highScore = 0;      // khoi tao diem cao lan dau bang 0
    int tailN;

    int headX;
    int headY;
    int tailX[21*21];
    int tailY[21*21];

    int itemX;
    int itemY;

    SDL_Rect snakeClips[2];                         // 2 item lay trong file sprite

    SDL_Window *window = NULL;
    SDL_Renderer *renderer = NULL;
    SDL_Texture *texture = NULL;
    SDL_Texture *printscore = NULL;                 // text diem khi dang choi
    SDL_Texture *printhighscore = NULL;             // text diem cao
    SDL_Texture *printgameover = NULL;              // text gameover
    SDL_Texture *printreplay = NULL;                // text choi lai
    Mix_Chunk *meow = NULL;                         // tieng meo keu
    Mix_Music *soundtrack = NULL;                   // nhac nen anh khieng hom
};

#endif // SNAKE_H_INCLUDED
