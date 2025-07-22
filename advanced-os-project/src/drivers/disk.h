// This header file declares the Disk class and its methods, such as read() and write().
#ifndef DISK_H
#define DISK_H

class Disk {
public:
    Disk();
    ~Disk();

    void read(int sector, void* buffer);
    void write(int sector, const void* buffer);
};

#endif // DISK_H