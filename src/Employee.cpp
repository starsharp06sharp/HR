#include "Employee.h"

Employee::Employee(string name): name(name) {}

Employee::Employee(string name, int salary ,int level =0): name(name), salary(salary), level(level) {}

string Employee::getName() {
    return name;
}

int Employee::getLevel() {
    return level;
}

void Employee::setLevel(int newLevel) {
    level = newLevel;
}

int Employee::calcSalary() {
    return salary;
}

void Employee::setSalary(int newSalary) {
    salary = newSalary;
}
