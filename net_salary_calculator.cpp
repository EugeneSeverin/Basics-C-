#include <iostream>

using namespace std;

int main(){

    float basic_salary, allowance_percentage, deduction_percentage, net_salary;

    cout << "Enter Basic Salary: ";
    cin >> basic_salary;

    cout << "Enter Percentage of Allowances: ";
    cin >> allowance_percentage;

    cout << "Enter Percentage of Deductions: ";
    cin >> deduction_percentage;

    net_salary = basic_salary + basic_salary * allowance_percentage - basic_salary * deduction_percentage;
    cout << "The net salary is: " << net_salary << endl;
    
    return 0;
}