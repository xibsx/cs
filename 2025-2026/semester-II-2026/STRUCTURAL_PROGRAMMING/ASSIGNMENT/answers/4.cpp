#include <iostream>
#include <string>
using namespace std;

int main() {
    string magenta = "\033[35m";
    string red = "\033[31m";
    string reset = "\033[0m";

    cout << magenta << "========================================\n";
    cout << "PROBLEM 4: WATER BILL CALCULATION\n";
    cout << "========================================\n" << reset;

    int units, bill, finalbill;
    string paystatus;

    cout << "Enter units consumed: \n";
    cin >> units;
    cout << "Enter payment status (paid/unpaid): \n";
    cin >> paystatus;

    // Calculate initial bill based on units
    if (units < 1) {
        cout << red << "Invalid units!\n" << reset;
        return 1;
    } else if (units <= 20) {
        bill = units * 700;   // 700 Tsh per unit
    } else if (units <= 50) {
        bill = units * 900;   // 900 Tsh per unit
    } else {
        bill = units * 1200;  // 1200 Tsh per unit
    }

    // Apply 5% discount if bill exceeds 50,000
    if (bill > 50000) {
        finalbill = bill - (bill * 5 / 100);
    } else {
        finalbill = bill;
    }

    // Add penalty for late payment
    if (paystatus == "unpaid") {
        finalbill = finalbill + 10000;
    }

    cout << magenta << "Final bill: " << finalbill << " Tsh\n" << reset;

    cout << magenta << "\nMADE BY antaresx VIA system group zas, Aloyce, bannister xibs\n";
    cout << "contact wa.me/antaresxibs\n";
    cout << red << "⚠️ DON'T COPY JUST UNDERSTAND\n" << reset;

    return 0;
}