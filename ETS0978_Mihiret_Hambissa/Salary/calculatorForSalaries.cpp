#include <iostream>
#include <iomanip> 
using namespace std;

int main() {

    string employeeName;
    double weeklyHours, bonusRate, baseSalary;
    double bonusPayment, grossSalary, pension, tax, netSalary;


    cout << "Enter Employee Name: ";
    getline(cin, employeeName);  

    cout << "Enter Weekly Working Hours: ";
    cin >> weeklyHours;

    cout << "Enter Bonus Rate Per Hour: ";
    cin >> bonusRate;

    cout << "Enter Base Salary: ";
    cin >> baseSalary;

    bonusPayment = weeklyHours * bonusRate;


    grossSalary = baseSalary + bonusPayment;

    pension = 0.05 * grossSalary; 
    tax = 0.15 * grossSalary;    

    netSalary = grossSalary - (pension + tax);

    cout << fixed << setprecision(2); 
    cout << "\nEmployee Name: " << employeeName << endl;
    cout << "Bonus Payment: $" << bonusPayment << endl;
    cout << "Gross Salary: $" << grossSalary << endl;
    cout << "Pension Deduction: $" << pension << endl;
    cout << "Tax Deduction: $" << tax << endl;
    cout << "Net Salary: $" << netSalary << endl;

    return 0;
}
