//sales_employee.h
#include "employee.h"

#ifndef SALES_EMPLOYEE_H
#define SALES_EMPLOYEE_H

class SalesEmployee: public Employee{
    public: 
        SalesEmployee() : Employee(){}
        SalesEmployee(double hours, double rate, double commission) :Employee(hours, rate, commission){
            num_hours = hours; 
            pay_rate = rate; 
            commission_amount = commission;
        }
        double get_pay();
        double num_hours, pay_rate, commission_amount;
};
#endif