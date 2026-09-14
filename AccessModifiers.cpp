/*
# Access Modifiers
Access modifiers control who can access the data members
(properties) and member functions (methods) of a class.

There are 3 access modifiers in C++:
1. Private
2. Public
3. Protected

# 1. Private
- Accessible only inside the class.
- Cannot be accessed directly using an object.
- In a C++ class, members are private by default.
Example:
    class Teacher {
        private:
            string salary;
    };
    Teacher t;
    t.salary = 50000;        //  Not allowed

# 2. Public
- Accessible from anywhere where the object/class is accessible.
- Can be accessed directly using an object.
Example:
    class Teacher {
        public:
            string name;
    };
    Teacher t;
    t.name = "Ashmit";       // Allowed

# 3. Protected
- Accessible inside the class.
- Also accessible inside its derived (child) classes.
- Cannot normally be accessed directly using an object.
Example:
    class Teacher {
        protected:
            string subject;
    };
    Teacher t;
    t.subject = "Maths";     //  Not allowed

    But a derived class can access it.
*/

#include <iostream>
using namespace std;
class Teacher {
private:
    double salary;

protected:
    string subject;

public:
    string name;
    // Public method to set the private salary.
    void setSalary(double s) {
        salary = s;
    }
    // Public method to access the private salary.
    void showSalary() {
        cout << "Salary: " << salary << endl;
    }
};
