#include "scheduler.h"
#include <vector>

class Task {
public:
    void (*function)();
    int priority;

    Task(void (*func)(), int prio) : function(func), priority(prio) {}
};

class Scheduler {
private:
    std::vector<Task> tasks;

public:
    void add_task(void (*func)(), int priority) {
        tasks.emplace_back(func, priority);
    }

    void schedule() {
        // Sort tasks by priority (higher priority first)
        std::sort(tasks.begin(), tasks.end(), [](const Task &a, const Task &b) {
            return a.priority > b.priority;
        });

        // Execute tasks in order of priority
        for (const auto &task : tasks) {
            task.function();
        }
    }
};