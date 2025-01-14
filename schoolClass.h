#ifndef SCHOOLCLASS_H
#define SCHOOLCLASS_H

#include <string>
#include <vector>
#include "task.h"

using namespace std;

class SchoolClass {
    public:
        string name;
        vector<task> homework;
        string description;

        // Constructs an empty class
        schoolClass();

        // Constructs a class with a name and description, but no homework yet
        schoolClass(string n, string d);

        // Returns true if the first task's due date is earlier than the second task
        // Helper function for addTask
        bool isEarlier(task t1, task t2);

        // Add a task to homework
        // REQUIRED: The array is sorted in order from early to latest due date
        void addTask(task t);

        // Removes a task from homework
        // REQUIRED: Order is preserved after removal
        void removeTask(task t);

        // Print out all of the homework for the course
        void printHomework();

};

#endif // SCHOOLCLASS_H