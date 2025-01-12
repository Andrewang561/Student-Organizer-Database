#include <iostram>
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

        // Returns the day
        int getDay();

        // Returns the month
        int getMonth();

        // Returns the year
        int getYear();

        // Returns the name of task
        string getName();

        // Returns the description
        string getDescription();

        // Changes the due date
        void changeDueDate(int d, int m, int y);

        // Prints the due date
        void printDueDate();

        // Prints the name of task
        void printName();

        // Prints the description
        void printDescription();
};