#include <iostream>
#include <string>
using namespace std;

int main() {
    string magenta = "\033[35m";
    string red = "\033[31m";
    string reset = "\033[0m";

    cout << magenta << "========================================\n";
    cout << "PROBLEM 3: SALARY INCREMENT DECISION\n";
    cout << "========================================\n" << reset;

    int salary, yearsofservice, newsalary;

    cout << "Enter current salary: \n";
    cin >> salary;
    cout << "Enter years of service: \n";
    cin >> yearsofservice;

    // Apply increment based on years of service
    if (yearsofservice < 2) {
        newsalary = salary + (salary * 5 / 100);  // 5% increase
    } else if (yearsofservice <= 5) {
        newsalary = salary + (salary * 10 / 100);  // 10% increase
    } else {
        newsalary = salary + (salary * 20 / 100);  // 20% increase
    }

    // Add hardship allowance if salary below 400,000
    if (salary < 400000) {
        newsalary = newsalary + 50000;
    }

    cout << magenta << "New salary: " << newsalary << " Tsh\n" << reset;

    cout << magenta << "\nMADE BY antaresx VIA system group zas, Aloyce, bannister xibs\n";
    cout << "contact wa.me/antaresxibs\n";
    cout << red << "⚠️ DON'T COPY JUST UNDERSTAND\n" << reset;

    return 0;
}