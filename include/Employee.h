#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

using namespace std;

class Employee {
public:
    Employee(string name);
    Employee(string name, int salary ,int level);
    virtual int calcSalary();
    string getName();
    int getLevel();
    void setSalary(int newSalary);
    void setLevel(int);
protected:
    string name;
    int salary, level;
};

#endif // EMPLOYEE_H
