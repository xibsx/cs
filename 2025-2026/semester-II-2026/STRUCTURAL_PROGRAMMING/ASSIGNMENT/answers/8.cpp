#include <iostream>
#include <string>
using namespace std;

int main() {
    string magenta = "\033[35m";
    string red = "\033[31m";
    string reset = "\033[0m";

    cout << magenta << "========================================\n";
    cout << "PROBLEM 8: HOSTEL ROOM ALLOCATION\n";
    cout << "========================================\n" << reset;

    int age;
    string gender;

    cout << "Enter age: \n";
    cin >> age;
    cout << "Enter gender (male/female): \n";
    cin >> gender;

    // Assign hostel based on gender
    if (gender == "male") {
        cout << magenta << "Hostel: Male hostel\n" << reset;
    } else if (gender == "female") {
        cout << magenta << "Hostel: Female hostel\n" << reset;
    } else {
        cout << red << "Invalid gender!\n" << reset;
        return 1;
    }

    // Assign block based on age (check highest priority first)
    if (age > 25) {
        cout << magenta << "Block: Special mature students' block\n" << reset;
    } else if (age < 18) {
        cout << magenta << "Block: Junior block\n" << reset;
    } else {
        cout << magenta << "Block: Senior block\n" << reset;
    }

    cout << magenta << "\nMADE BY antaresx VIA system group zas, Aloyce, bannister xibs\n";
    cout << "contact wa.me/antaresxibs\n";
    cout << red << "⚠️ DON'T COPY JUST UNDERSTAND\n" << reset;

    return 0;
}