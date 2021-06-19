#include "game.hpp"
#include <cstdlib>
#include <memory>

Game::Game() {

}
Game::Game(int width, int height) {
    this->board = (int**)malloc(sizeof(int) * width * height);
    for(int i = 0; i < width; i++){
        for(int j = 0; j < height; j++) {
            this->board[i][j] = Tile::Empty;
        }
    }
}
Game::~Game() {
    free(this->board);
}
Tile Game::get_tile(int x, int y) {
    return Tile(this->board[x][y]);
}
void Game::set_tile(Tile tile, int x, int y) {

}