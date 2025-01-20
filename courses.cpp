#include <string>
#include <vector>
#include "courses.h"

using namespace std;

Courses::courses() {
    studentName = ""
}

Courses::courses(string n) {
    studentName = n;
}

void Courses::addCourse(SchoolClass c) {
    classes.push_back(c);
}

void Courses::removeCourse(SchoolClass c) {
    classes.erase(find(classes.begin(), classes.end(), c));
}

Task Courses::findEarliestTask() {
    if (classes.size() == 0) {
        return task();
    }

    Task earliestTask = task();

    for (int i = 0; i < classes.size(); i++) {
        if (classes[i].hasHomework()) {
            if (classes[i].isEarlier(classes[i].homework[0], earliestTask)) {
                earliestTask = classes[i].homework[0];
            }
        }
    }

    return earliestTask;  
}