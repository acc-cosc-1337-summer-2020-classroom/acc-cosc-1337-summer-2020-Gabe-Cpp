#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "employee.h"
#include "engineer.h"
#include "sales_employee.h"


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
 
TEST_CASE("Test class function Engineer::get_pay()"){
    Employee *engineer = new Engineer(1500, 400); 
    
    double result = engineer -> get_pay(); 
    REQUIRE(result == 1900.0);

    delete engineer;
    engineer = nullptr;
}

TEST_CASE("Test class function SalesPerson::get_pay()"){
    Employee *sales_employee = new SalesEmployee(40, 10, 500);

    double result = sales_employee -> get_pay();
    REQUIRE(result == 900.0);
    
    delete sales_employee; 
    sales_employee = nullptr; 
}
