#include <bits/stdc++.h>
using namespace std;

int main() {
    string name;
    int a, b, c, d, e;
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter marks of each subject: ";
    cin >> a >> b >> c >> d >> e;
    float x = (a + b + c + d + e);
    float grade=(x*100)/500;
    cout << "GRADE: " << grade << endl;
    if (grade >= 90 && grade <= 100) {
        cout << "Your Grade: A";
    } else if (grade >= 80 && grade < 90) {
        cout << "Your Grade: B";
    } else if (grade >= 70 && grade < 80) {
        cout << "Your Grade: C";
    } else if (grade >= 60 && grade < 70) {
        cout << "Your Grade: D";
    } else if (grade >= 40 && grade < 60) {
        cout << "Your Grade: E";
    } else {
        cout << "Fail";
    }

    // Display the highest and lowest possible grades (these values seem arbitrary)
    cout << "\nHighest Grade: 98.9";
    cout << "\nLowest Grade: 38.9";

    return 0;
}
