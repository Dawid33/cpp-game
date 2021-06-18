#ifndef EVENTS_CPP
#define EVENTS_CPP
#include <variant>
#include <thread>
#include <memory>

struct DrawEvent {};
struct ExitEvent {};
using Event = std::variant<ExitEvent,DrawEvent>;

void input_handler(std::shared_ptr<bool> should_exit);

class EventManager {
    public:
    std::shared_ptr<bool> should_exit = std::make_shared<bool>(false);

    EventManager(void);
    ~EventManager();
    Event get_next_event();
};

#endif