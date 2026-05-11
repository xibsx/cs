#include <iostream>
#include <string>
using namespace std;

int main() {
    string magenta = "\033[35m";
    string red = "\033[31m";
    string reset = "\033[0m";

    cout << magenta << "========================================\n";
    cout << "PROBLEM 7: SHOP DISCOUNT CALCULATION\n";
    cout << "========================================\n" << reset;

    int amount, discount, finalamount;
    string studentstatus;

    cout << "Enter purchase amount: \n";
    cin >> amount;
    cout << "Are you a student? (yes/no): \n";
    cin >> studentstatus;

    // Base discount based on purchase amount
    if (amount < 20000) {
        discount = 0;
    } else if (amount <= 50000) {
        discount = 5;
    } else if (amount <= 100000) {
        discount = 10;
    } else {
        discount = 15;
    }

    // Extra 5% for students
    if (studentstatus == "yes") {
        discount = discount + 5;
    }

    // Cap discount at 18%
    if (discount > 18) {
        discount = 18;
    }

    finalamount = amount - (amount * discount / 100);

    cout << magenta << "Final amount to pay: " << finalamount << " Tsh\n" << reset;

    cout << magenta << "\nMADE BY antaresx VIA system group zas, Aloyce, bannister xibs\n";
    cout << "contact wa.me/antaresxibs\n";
    cout << red << "⚠️ DON'T COPY JUST UNDERSTAND\n" << reset;

    return 0;
}