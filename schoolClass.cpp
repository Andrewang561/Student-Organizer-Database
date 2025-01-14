#include <string>
#include <vector>
#include "schoolClass.h"

using namespace std;

schoolClass::schoolClass() {
    name = "";
    description = "";
}

schoolClass::schoolClass(string n, string d) {
    name = n;
    description = d;
}

bool schoolClass::isEarlier(task t1, task t2) {
    if (t1.year < t2.year) {
        return true;
    } else if (t2.year < t1.year) {
        return false;
    } else if (t1.month < t2.month) {
        return true;
    } else if (t2.month < t1.month) {
        return false;
    } else if (t1.day < t2.day) {
        return true;
    } 

    return false;
}

void schoolClass::addTask(task t) {
    for (int i = 0; i < homework.size(); i++) {
        if (isEarlier(t, homework[i])) {
            homework.insert(homework.begin() + i, t);
            return;
        }
    }

    homework.push_back(t);
}

void schoolClass::removeTask(task t) {
    homework.erase(find(homework.begin(), homework.end(), t));
}

