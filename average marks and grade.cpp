// C++ Program to Calculate the average marks and grade
#include <iostream>
using namespace std;
int main() {
    float eng, maths, french, science, cre;
    float total = 0.00, average = 0.00;
    char grade;
    cout << "Enter the marks of eng::\n";
    cin >> eng;
    cout << "Enter the marks of maths::\n";
    cin >> maths;
    cout << "Enter the marks of  french::\n";
    cin >> french;
    cout << "Enter the marks of science::\n";
    cin >> science;
    cout << "Enter the marks of cre::\n";
    cin >> cre;
    total = eng + maths + french + science + cre;
    average = total / 5.0;
    if (average > 100)
        grade='F';
    else if (average >= 70 && average < 100)
        grade = 'A';
    else if (average >= 60 && average < 69)
        grade = 'B';
    else if (average >= 50 && average < 59)
        grade = 'C';
    else if (average >= 40 && average < 49)
        grade = 'D';
    else
        grade = 'E';
    cout << "\nThe Total marks   = " << total << "/500\n";
    cout << "The Average marks = " << average << "\n";
    cout << "The Grade         = '" << grade << "'\n";
    return 0;
}
