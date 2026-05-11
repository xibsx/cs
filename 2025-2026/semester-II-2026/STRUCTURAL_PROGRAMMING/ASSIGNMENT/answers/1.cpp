#include <iostream>
#include <string>
using namespace std;

int main() {
    // Color codes for terminal output
    string magenta = "\033[35m";
    string red = "\033[31m";
    string reset = "\033[0m";

    cout << magenta << "========================================\n";
    cout << "PROBLEM 1: BUS FARE DETERMINATION\n";
    cout << "========================================\n" << reset;

    int age, distance;
    int normalfare, amounttopay;

    cout << "Enter age: \n";
    cin >> age;
    cout << "Enter distance (km): \n";
    cin >> distance;

    // Determine normal fare based on distance
    if (distance < 1) {
        cout << red << "Invalid distance!\n" << reset;
        return 1;
    } else if (distance <= 10) {
        normalfare = 500;
    } else if (distance <= 30) {
        normalfare = 1000;
    } else {
        normalfare = 2000;
    }

    // Determine amount to pay based on age
    if (age < 5) {
        amounttopay = 0;  // Children below 5 travel free
    } else if (age <= 17) {
        amounttopay = normalfare * 60 / 100;  // 60% of normal fare
    } else if (age <= 59) {
        amounttopay = normalfare;  // Full fare
    } else {
        amounttopay = normalfare * 70 / 100;  // 30% discount for seniors
    }

    cout << magenta << "Amount to pay: " << amounttopay << " Tsh\n" << reset;

    // Credit and warning
    cout << magenta << "\nMADE BY antaresx VIA system group zas, Aloyce, bannister xibs\n";
    cout << "contact wa.me/antaresxibs\n";
    cout << red << "⚠️ DON'T COPY JUST UNDERSTAND\n" << reset;

    return 0;
}