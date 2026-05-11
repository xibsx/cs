#include <iostream>
#include <string>
using namespace std;

int main() {
    string magenta = "\033[35m";
    string red = "\033[31m";
    string reset = "\033[0m";

    cout << magenta << "========================================\n";
    cout << "PROBLEM 6: ELECTRICITY USAGE MONITORING\n";
    cout << "========================================\n" << reset;

    int units;
    string paystatus;

    cout << "Enter units consumed: \n";
    cin >> units;
    cout << "Enter payment status (paid/unpaid): \n";
    cin >> paystatus;

    // Classify usage level
    if (units < 100) {
        cout << magenta << "Usage category: Low usage\n" << reset;
    } else if (units <= 300) {
        cout << magenta << "Usage category: Normal usage\n" << reset;
    } else if (units <= 500) {
        cout << magenta << "Usage category: High usage\n" << reset;
    } else {
        cout << magenta << "Usage category: Critical usage\n" << reset;
    }

    // Issue warning if unpaid and usage exceeds 300
    if (paystatus == "unpaid" && units > 300) {
        cout << red << "Warning: Disconnection warning issued\n" << reset;
    }

    cout << magenta << "\nMADE BY antaresx VIA system group zas, Aloyce, bannister xibs\n";
    cout << "contact wa.me/antaresxibs\n";
    cout << red << "⚠️ DON'T COPY JUST UNDERSTAND\n" << reset;

    return 0;
}