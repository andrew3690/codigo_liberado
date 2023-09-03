#ifndef FCFS_SCHEDULER_H
#define FCFS_SCHEDULER_H

#include <iostream>
#include <vector>
// #include "read_file.cc"
#include "definers/Process.h"

class FCFS_Scheduler : public Process {
    public:
        FCFS_Scheduler(int id, int data_int, int time, int priority)
            : Process(id, data_int, time, priority){};
 
        void addTask(int arrivalTime);
        void execute();

private:
    std::vector<std::pair<int, int>> processList; // Cria um vetor de pares (priority, time)

};

#endif // FCFS_SCHEDULER_H
