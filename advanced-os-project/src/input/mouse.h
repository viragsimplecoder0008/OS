#ifndef MOUSE_H
#define MOUSE_H

class Mouse {
public:
    Mouse();
    void update();
    void get_position(int &x, int &y);
    bool is_button_pressed(int button);

private:
    int posX;
    int posY;
    bool buttonState[3]; // Assuming 3 buttons: left, right, middle
};

#endif // MOUSE_H