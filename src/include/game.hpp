#ifndef GAME_CPP
#define GAME_CPP
#include <memory>

enum Tile {Empty};

class Game {
public:
    int board_width = 10;
    int board_height = 10;
    Game(int width, int heigth);
    Game();
    ~Game();
    Tile get_tile(int x, int y);
    void set_tile(Tile tile, int x, int y);
private:
    int** board = nullptr;
};
#endif