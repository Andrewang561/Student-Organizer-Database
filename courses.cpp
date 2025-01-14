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

    if (classes.size() == 1) {
        if (classes[0].homework.size() > 0) {
            return classes[0].homework[0];
        } else {
            return task();
        }
    }
}