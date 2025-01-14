#ifndef COURSES_H
#define COURSES_H

#include <string>
#include <vector>
#include "schoolClass.h"
#include "task.h"

using namespace std;

class Courses {
    public:
        string studentName;
        vector<SchoolClass> classes;

        // Constructs an empty list of classes for unknown student
        courses();

        // Constructs an empty list of classes for a student
        courses(string n);

        // Adds a course to the student's list
        // Array is not sorted
        void addCourse(SchoolClass c);

        // Deletes a courese from the student's list
        // Order is still preserved though
        void removeCourse(SchoolClass c);

        // Returns task that needs to be done ASAP
        Task findEarliestTask();
};

#endif // COURSES_H