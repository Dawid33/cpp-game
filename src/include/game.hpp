#ifndef GAME_CPP
#define GAME_CPP
#include <memory>
class Game {
public:
    std::unique_ptr<> board = nullptr;
    Game();
    ~Game();
};
#endif