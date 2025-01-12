#include "task.h"
#include <iostream>

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

int Task::getDay() {
    return day;
}

int Task::getMonth() {
    return month;
}

int Task::getYear() {
    return year;
}

string Task::getName() {
    return name;
}

string Task::getDescription() {
    return description;
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

