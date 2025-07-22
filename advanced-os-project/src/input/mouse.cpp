#include "mouse.h"

Mouse::Mouse() {
    // Initialize mouse position and button states
    x = 0;
    y = 0;
    left_button_pressed = false;
    right_button_pressed = false;
}

void Mouse::update_position(int new_x, int new_y) {
    x = new_x;
    y = new_y;
}

void Mouse::set_button_state(bool left_pressed, bool right_pressed) {
    left_button_pressed = left_pressed;
    right_button_pressed = right_pressed;
}

int Mouse::get_x() const {
    return x;
}

int Mouse::get_y() const {
    return y;
}

bool Mouse::is_left_button_pressed() const {
    return left_button_pressed;
}

bool Mouse::is_right_button_pressed() const {
    return right_button_pressed;
}