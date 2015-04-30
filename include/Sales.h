#ifndef SALES_H
#define SALES_H

#include "Employee.h"
#define PERCENT 0.1

class Sales : public Employee {
public:
    Sales(string name);
    Sales(string name, int salary ,int level);
    void setSaleCount(int newSalecount);
    int calcSalary();
protected:
    int salecount;
};

#endif // SALES_H
