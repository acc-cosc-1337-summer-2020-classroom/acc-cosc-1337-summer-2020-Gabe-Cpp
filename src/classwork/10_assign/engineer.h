//engineer.h
#include"employee.h"

#ifndef ENGINEER_H
#define ENGINEER_H

class Engineer: public Employee{  
    public: 
        Engineer() : Employee(){}
        Engineer(double base, double bonus) :Employee(base,bonus){
            base_pay = base; 
            bonus_pay= bonus;
        }        
        double get_pay();
        double base_pay, bonus_pay;         
};
#endif

