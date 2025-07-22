#ifndef TASKBAR_H
#define TASKBAR_H

class Taskbar {
public:
    Taskbar();
    void draw();
    void add_application(const char* app_name);
    void handle_click(int x, int y);
    
private:
    // Add any necessary private members here
};

#endif // TASKBAR_H