#include <iostream>
#include <string>
using namespace std;

int main() {
    string magenta = "\033[35m";
    string red = "\033[31m";
    string reset = "\033[0m";

    cout << magenta << "========================================\n";
    cout << "PROBLEM 2: STUDENT EXAMINATION RESULT\n";
    cout << "========================================\n" << reset;

    int coursework, exammarks, total;
    string grade;

    cout << "Enter coursework marks (out of 40): \n";
    cin >> coursework;
    cout << "Enter examination marks (out of 60): \n";
    cin >> exammarks;

    // Validate inputs
    if (coursework < 0 || coursework > 40) {
        cout << red << "Invalid coursework marks!\n" << reset;
        return 1;
    } else if (exammarks < 0 || exammarks > 60) {
        cout << red << "Invalid examination marks!\n" << reset;
        return 1;
    }

    total = coursework + exammarks;

    // Determine grade with automatic fail if exam below 30
    if (exammarks < 30) {
        grade = "Fail";  // Automatic fail
    } else if (total < 50) {
        grade = "Fail";
    } else if (total <= 64) {
        grade = "Pass";
    } else if (total <= 74) {
        grade = "Credit";
    } else {
        grade = "Distinction";
    }

    cout << magenta << "Total: " << total << "\n";
    cout << "Grade: " << grade << "\n" << reset;

    cout << magenta << "\nMADE BY antaresx VIA system group zas, Aloyce, bannister xibs\n";
    cout << "contact wa.me/antaresxibs\n";
    cout << red << "⚠️ DON'T COPY JUST UNDERSTAND\n" << reset;

    return 0;
}