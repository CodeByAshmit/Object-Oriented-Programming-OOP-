/*
# Classes and Objects
# Class:
A class is a blueprint or template used to create objects (real-world entities).
It defines the properties (data) and behaviors (methods) that objects will have.
Example:
Consider a school system that consists of different teachers.
Class: Teacher
Properties:
* Name
* Salary
* Subject
Methods:
* teach()
C++ Syntax:
*/
#include<iostream>
#include<string>
using namespace std;
class Teacher {
public:                                      // Will learn later
// Properties
string name;
double salary;
string subject;
// Methods / Member Functions
// A method is a function that belongs to a class.
void teach() {
    cout << name << " is teaching";
}
};

/*
# Object:
An object is an instance of a class.
It represents a real-world entity and can access the properties
and methods defined in the class.
Example:
The Teacher class is our blueprint.
Now we can create different teacher objects (entities) from it.
Object: Teacher 1
Properties Values:
Name: Ashmit
Salary: 200000
Subject: Maths

Object: Teacher 2
Properties Values:
Name: Deepak
Salary: 40000
Subject: Hindi

Object: Teacher 3
Properties Values:
Name: Mayank
Salary: 10000
Subject: English

C++ Syntax(Considering Above class example):
*/

int main() {
Teacher t1;
t1.name = "Ashmit";
t1.salary = 200000;
t1.subject = "Maths";

Teacher t2;
t2.name = "Deepak";
t2.salary = 40000;
t2.subject = "Hindi";

Teacher t3;
t3.name = "Mayank";
t3.salary = 10000;
t3.subject = "English";
cout<< t1.name<<endl<<t2.name<<endl<<t3.name<<endl;
return 0;
}
