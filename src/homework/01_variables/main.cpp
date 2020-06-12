//write include statements
#include<iostream>
#include"variables.h"

//write namespace using statement for cout
using std:: cout; using std:: cin;

int main()
{
	double meal_amount= 0;
	double tip_rate= 0;
	double tip_amount= 0;
	double tax_amount= 0;
	double total= 0;

	cout<<"Enter the meal amount: ";
	cin>>meal_amount;

	tax_amount= get_sales_tax_amount(meal_amount);

	cout<<"Enter the tip rate as %: ";
	cin>>tip_rate;

	tip_amount= get_tip_amount(meal_amount, tip_rate);

	total= tip_amount +tax_amount + meal_amount;
	cout<<"Meal Amount: "<<meal_amount<<"\n";
	cout<<"Sales Tax: "<<tax_amount<<"\n";
	cout<<"Tip Amount: "<<tip_amount<<"\n";
	cout<<"Total: "<<total<<"\n";
	
	return 0;
}
