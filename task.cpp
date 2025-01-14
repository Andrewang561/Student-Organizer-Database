#include <iostream>
#include <string>
#include "task.h"

using namespace std;

Task::task(int d, int m, int y, string n) {
    day = d;
    month = m;
    year = y;
    name = n;
}

Task::task(int d, int m, int y, string n, string d) {
    day = d;
    month = m;
    year = y;
    name = n;
    description = d;
}

void Task::changeDueDate(int d, int m, int y) {
    day = d;
    month = m;
    year = y;
}

void Task::printDueDate() {
    cout << day << "/" << month << "/" << year << endl;
}

void Task::printName() {
    cout << name << endl;
}

void Task::printDescription() {
    cout << description << endl;
}

void Task::deleteTask(Task t) {
    delete t;
}

bool Task::operator== (const task &t) const {
    return day == t.day && month == t.month && year == t.year && name == t.name;
}

