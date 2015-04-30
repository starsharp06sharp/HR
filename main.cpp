#include <iostream>
#include "Employee.h"
#include "Sales.h"

using namespace std;

int main() {
    Employee* people[3];
    int i=0;

    Employee pgmBen("Ben");
    people[i++] = &pgmBen;
    pgmBen.setLevel(2);
    pgmBen.setSalary(100);

    Sales salJack("Jack"), salTom("Tom");
    people[i++] = &salJack;
    people[i++] = &salTom;
    salJack.setLevel(1);
    salTom.setLevel(2);
    salTom.setSalary(100);
    salJack.setSalary(200);

    salJack.setSaleCount(2000);
    salTom.setSaleCount(5000);

    for (i=0; i<3 ;i++)
        cout<<people[i] ->getName()<<':'<<people[i]->calcSalary()<<endl;

    return 0;
}
