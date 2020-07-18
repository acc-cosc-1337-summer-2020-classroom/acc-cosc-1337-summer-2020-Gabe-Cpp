//sales_employee.cpp
#include"sales_employee.h"

double SalesEmployee::get_pay(){        
    total_pay = num_hours * pay_rate + commission_amount; 
    return total_pay;
}
