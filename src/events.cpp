#include <iostream>
#include <thread>
#include <memory>
#include "terminal.hpp"
#include "events.hpp"

Event EventManager::get_next_event() {
    return Event{ExitEvent{}};
}
EventManager::EventManager() {
    std::thread input_handle (input_handler,this->should_exit);
    input_handle.detach();
}
EventManager::~EventManager() {
    this->should_exit = std::make_shared<bool>(false);
}
void input_handler(std::shared_ptr<bool> should_exit) {
    while (!*should_exit) {
        
    }
    std::cout << "Exiting input listening thread..." << std::endl;
}