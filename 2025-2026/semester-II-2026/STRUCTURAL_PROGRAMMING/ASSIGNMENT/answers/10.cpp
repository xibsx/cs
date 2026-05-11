#include <iostream>
#include <string>
using namespace std;

int main() {
    string magenta = "\033[35m";
    string red = "\033[31m";
    string reset = "\033[0m";

    cout << magenta << "========================================\n";
    cout << "PROBLEM 10: PHONE INSTALLMENT ELIGIBILITY\n";
    cout << "========================================\n" << reset;

    int salary, yearemployed;
    string debtstatus;

    cout << "Enter salary: \n";
    cin >> salary;
    cout << "Enter years employed: \n";
    cin >> yearemployed;
    cout << "Do you have existing debt? (yes/no): \n";
    cin >> debtstatus;

    // Check eligibility step by step
    if (debtstatus == "yes") {
        cout << red << "Not eligible: Existing debt\n" << reset;
    } else if (yearemployed < 1) {
        cout << red << "Not eligible: Employed for less than one year\n" << reset;
    } else if (salary < 300000) {
        cout << red << "Not eligible: Salary below 300,000 Tsh\n" << reset;
    } else if (salary <= 600000) {
        cout << magenta << "Eligible for phones up to 500,000 Tsh\n" << reset;
    } else {
        cout << magenta << "Eligible for any phone\n" << reset;
    }

    cout << magenta << "\nMADE BY antaresx VIA system group zas, Aloyce, bannister xibs\n";
    cout << "contact wa.me/antaresxibs\n";
    cout << red << "⚠️ DON'T COPY JUST UNDERSTAND\n" << reset;

    return 0;
}