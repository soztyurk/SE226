#include <cmath>
#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    // Q1 ****************************
    string name;
    string student_id;

    cout << "What is your name?" << endl;
    cin >> name;

    cout << "Hello " << name << "." << endl;

    cout << "What is your Student ID?" << endl;
    cin >> student_id;

    cout << "Your ID is " << student_id << "." << endl;

    //Q2 *****************************
    int total_seconds;
    cout << "Enter total number of seconds:" << endl;
    cin >> total_seconds;

    int hours = total_seconds / 3600;
    int remaining_seconds = total_seconds % 3600;
    int minutes = remaining_seconds / 60;
    int seconds = remaining_seconds % 60;

    cout << total_seconds << " seconds is "
         << hours << " hours, "
         << minutes << " minutes, and "
         << seconds << " seconds." << endl;

    //Q3 *************************************

        double x1, y1, x2, y2;

        cout << "Enter x1: ";
        cin >> x1;

        cout << "Enter y1: ";
        cin >> y1;

        cout << "Enter x2: ";
        cin >> x2;

        cout << "Enter y2: ";
        cin >> y2;

        double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

        cout << "The distance between the points is: " << distance << endl;

    //Q4 ******************************************


        cout << "*******\n *****\n  ***\n   *";
        return 0;


}