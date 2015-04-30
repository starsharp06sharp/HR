#include "Sales.h"

Sales::Sales(string name) : Employee(name) {}

Sales::Sales(string name, int salary ,int level = 0) : Employee(name, salary, level) {}

void Sales::setSaleCount(int newSalecount) {
     salecount = newSalecount;
}

int Sales::calcSalary() {
    return salary + salecount * PERCENT;
}
