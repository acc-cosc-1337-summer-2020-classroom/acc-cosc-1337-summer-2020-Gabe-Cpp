//main.cpp
#include<iostream>
#include<cctype>
#include"employee.h"
#include"engineer.h"
#include"sales_employee.h"

using namespace std;

int main() {
  char choice; 
  double base_pay, bonus, hours, rate, commission;  
  do{
    cout<<"Options:\n";
    cout<<"Engineer (1)\nSales Employee (2)\nExit (0)\n";
    int select;   
    cin>> select; 
    if (select == 1){              
      cout<<"Enter base pay ($): \n";
      cin >> base_pay;
      cout<<"Enter bonus pay ($): \n";
      cin >> bonus;
      Employee *engineer = new Engineer(base_pay, bonus);
      cout<<"Engineer gross pay ($): "<< engineer->get_pay()<< endl; 
      delete engineer; 
      engineer = nullptr;
    } else if (select == 2) {      
      cout<<"Enter hours: \n";
      cin>> hours; 
      cout<< "Enter hourly rate: \n";
      cin>> rate; 
      cout<<"Enter commission ($): \n";
      cin>> commission; 
      Employee *sales_employee = new SalesEmployee(hours, rate, commission);
      cout<< "Sales employee gross pay ($): "<< sales_employee->get_pay() << endl; 
      delete sales_employee;
      sales_employee = nullptr;    
    } else {
      cout<<"See You Later, Alligator!\n";
      break;
    }    
    cout << "Another entry? (Y/N) "<< endl;
    cin >> choice;
  }while ((choice == 'Y') || (choice == 'y'));
  return 0;
}