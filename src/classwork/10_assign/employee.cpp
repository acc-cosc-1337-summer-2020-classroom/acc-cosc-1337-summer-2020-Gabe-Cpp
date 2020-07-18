//employee.cpp
#include"employee.h"

Employee::Employee(double base, double bonus){
    base_pay = base; 
    bonus_pay = bonus; 
}
Employee::Employee(double hours, double rate, double commission){
    num_hours = hours; 
    pay_rate = rate; 
    commission_amount = commission; 
}
