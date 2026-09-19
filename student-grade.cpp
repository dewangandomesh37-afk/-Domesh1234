#include <iostream>
using namespace std;

int main() {
    string name;
    int marks[5];
    int total = 0;

    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter marks of 5 subjects:\n";

    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
        total += marks[i];
    }

    float percentage = total / 5.0;

    cout << "\nStudent: " << name << endl;
    cout << "Total Marks: " << total << "/500" << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    if (percentage >= 90)
        cout << "Grade: A";
    else if (percentage >= 80)
        cout << "Grade: B";
    else if (percentage >= 70)
        cout << "Grade: C";
    else if (percentage >= 60)
        cout << "Grade: D";
    else
        cout << "Grade: F";

    return 0;
}
