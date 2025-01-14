#ifndef TASK_H
#define TASK_H

using namespace std;

class Task {
    public:
        int day;
        int month;
        int year;
        string name;
        string description = "";

        // Constructs a new task with information about its due date and name
        task(int d, int m, int y, string n);

        // Constructs a new task with information about its due date, name, and description
        task(int d, int m, int y, string n, string d);

        // Changes the due date
        void changeDueDate(int d, int m, int y);

        // Prints the due date
        void printDueDate();

        // Prints the name of task
        void printName();

        // Prints the description
        void printDescription();

        // Deletes a given task
        void deleteTask(Task t);

        // Overload == operator
        bool operator== (const task &t) const;
};

#endif // TASK_H