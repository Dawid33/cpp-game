#include <iostream>
#include <string>
#include <variant>
#include "terminal.hpp"
#include "events.hpp"

int main() {
    clear_screen();
    EventManager event_manager = EventManager();
    while(true) {
        Event event = event_manager.get_next_event();
        std::visit([&event_manager](auto event) {
            using event_t = std::decay_t<decltype(event)>;
            if (std::is_same_v<event_t, ExitEvent>) {
                event_manager.should_exit = std::make_shared<bool>(true);
            } else if (std::is_same_v<event_t, DrawEvent>) {
                std::cout << "THIS IS THE DRAW EVENT" << std::endl;
            }
            return 0;
        }, event);
    }
}