#include <iostream>
#include "Employee.h"
#include "Sales.h"

using namespace std;

int main() {

    Employee pgmBen("Ben");

    pgmBen.setLevel(2);
    pgmBen.setSalary(100);

    Sales salJack("Jack"), salTom("Tom");
    salJack.setLevel(1);
    salTom.setLevel(2);
    salTom.setSalary(100);
    salJack.setSalary(200);

    salJack.setSaleCount(2000);
    salTom.setSaleCount(5000);

    cout<<pgmBen.getName()<<':'<<pgmBen.calcSalary()<<endl;
    cout<<salJack.getName()<<':'<<salJack.calcSalary()<<endl;
    cout<<salTom.getName()<<':'<<salTom.calcSalary()<<endl;

    return 0;
}
