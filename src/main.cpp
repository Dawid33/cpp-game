#include <iostream>
#include <string>
#include <variant>
#include "terminal.hpp"
#include <memory>
#include "game.hpp"

enum UserAction {
    Move,
    None,
};

struct Command {
    UserAction action = UserAction::None;
    std::string* args = NULL;
};

Command parse_command(std::string);
std::string get_input();


int main(int argc, char** argv) {
    clear_screen();
    std::unique_ptr<bool> should_exit = std::make_unique<bool>(false);
    while (!*should_exit) {
        Command command = parse_command(get_input());
        switch (command.action) {
            case UserAction::Move: {
                
            }
            case UserAction::None:
                break;
            default:
                print_err("UserAction enum member not covered in switch statment.");
                *should_exit = true;
        }
    }
    // Not exist Here
    return 0;
}

std::string get_input() {
    std::string output = "";
    return output;
}

Command parse_command(std::string input) {
    return Command {
        .action = UserAction::None,
        .args = nullptr,
    };
}