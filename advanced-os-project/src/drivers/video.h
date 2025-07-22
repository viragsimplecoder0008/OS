#ifndef VIDEO_H
#define VIDEO_H

class Video {
public:
    void init();
    void draw_pixel(int x, int y, unsigned int color);
    void clear_screen(unsigned int color);
    void draw_rectangle(int x, int y, int width, int height, unsigned int color);
    void draw_line(int x1, int y1, int x2, int y2, unsigned int color);
};

#endif // VIDEO_H