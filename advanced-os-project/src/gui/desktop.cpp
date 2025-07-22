#include "desktop.h"
#include "wallpaper.h"
#include "taskbar.h"
#include "../input/mouse.h"

class Desktop {
public:
    Desktop();
    void draw();
    void handle_click(int x, int y);
    
private:
    Wallpaper wallpaper;
    Taskbar taskbar;
};

Desktop::Desktop() {
    // Initialize wallpaper and taskbar
    wallpaper.set_wallpaper("default_wallpaper.bmp");
    taskbar.add_application("Terminal");
}

void Desktop::draw() {
    wallpaper.draw();
    taskbar.draw();
}

void Desktop::handle_click(int x, int y) {
    if (taskbar.is_clicked(x, y)) {
        taskbar.handle_click(x, y);
    } else {
        // Handle desktop icon clicks or other interactions
    }
}