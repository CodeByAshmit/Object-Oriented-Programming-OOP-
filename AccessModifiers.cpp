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

We can cannot access but we can make some specific functions(public) and work on it.
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
public:
string name;
string subject;
string dept;

     void changedept(string newDept){
        dept=newDept;
     }
     void setSalary(double s){              //This specical function is called setter
        salary=s;
     }
     double getSalary(){                     //This special function is called getter
        return salary;
     }
};

int main(){
    Teacher t1;
    t1.name="ashmit";
    t1.subject="CSE";
    t1.dept="Computer Science";
    cout<<"Salary is:"<<t1.getSalary()<<endl; //0 as not intialized
    double s=50000;
    t1.setSalary(s);
    cout<<t1.getSalary()<<endl;
    cout<<t1.name<<endl;
}