#include <iostream>
#include <string>
using namespace std;

int main() {
    string magenta = "\033[35m";
    string red = "\033[31m";
    string reset = "\033[0m";

    cout << magenta << "========================================\n";
    cout << "PROBLEM 5: ATM WITHDRAWAL VALIDATION\n";
    cout << "========================================\n" << reset;

    int balance, withdraw;

    cout << "Enter account balance: \n";
    cin >> balance;
    cout << "Enter withdrawal amount: \n";
    cin >> withdraw;

    // Check all withdrawal conditions
    if (withdraw < 10000) {
        cout << red << "Rejected: Minimum withdrawal is 10,000 Tsh\n" << reset;
    } else if (withdraw > 300000) {
        cout << red << "Rejected: Maximum withdrawal is 300,000 Tsh\n" << reset;
    } else if (withdraw % 10000 != 0) {
        cout << red << "Rejected: Withdrawal must be in multiples of 10,000 Tsh\n" << reset;
    } else if (withdraw > balance) {
        cout << red << "Rejected: Insufficient balance\n" << reset;
    } else if (balance - withdraw < 20000) {
        cout << red << "Rejected: Minimum balance of 20,000 Tsh must remain\n" << reset;
    } else {
        cout << magenta << "Approved: Transaction successful\n" << reset;
    }

    cout << magenta << "\nMADE BY antaresx VIA system group zas, Aloyce, bannister xibs\n";
    cout << "contact wa.me/antaresxibs\n";
    cout << red << "⚠️ DON'T COPY JUST UNDERSTAND\n" << reset;

    return 0;
}