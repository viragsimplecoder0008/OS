#ifndef SCHEDULER_H
#define SCHEDULER_H

#include <vector>
#include "task.h"

class Scheduler {
public:
    Scheduler();
    void schedule();
    void add_task(Task* task);
    void remove_task(Task* task);
    
private:
    std::vector<Task*> tasks;
    int current_task_index;
};

#endif // SCHEDULER_H