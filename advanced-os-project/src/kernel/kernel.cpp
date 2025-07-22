#include "kernel.h"
#include "common.h"
#include "drivers/video.h"
#include "gui/desktop.h"
#include "gui/taskbar.h"
#include "input/mouse.h"

class Kernel {
public:
    void init();
    void run();
    void shutdown();

private:
    Video videoDriver;
    Desktop desktop;
    Taskbar taskbar;
    Mouse mouse;
};

void Kernel::init() {
    videoDriver.init();
    desktop.draw();
    taskbar.draw();
}

void Kernel::run() {
    while (true) {
        // Handle input and update the GUI
        if (mouse.is_button_pressed(0)) { // Left mouse button
            int x, y;
            mouse.get_position(x, y);
            desktop.handle_click(x, y);
            taskbar.handle_click(x, y);
        }
        // Other tasks and updates can be handled here
    }
}

void Kernel::shutdown() {
    // Perform shutdown procedures
}