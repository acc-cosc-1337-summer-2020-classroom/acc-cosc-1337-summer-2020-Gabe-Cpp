//employee.h

#ifndef EMPLOYEE_H
#define EMPLOYEE_H
class Employee{

    public:      
        Employee(){}  
        Employee(double, double);
        Employee(double, double, double);
        virtual double get_pay()= 0;
        double base_pay, bonus_pay, num_hours, pay_rate, commission_amount, gross_pay, total_pay;
        virtual ~Employee(){}
};

#endif
