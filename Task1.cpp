#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Number of students: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid number of students." << endl;
        return 1;
    }

    int* marks = new int[n];

    cout << "Enter " << n << " marks: ";
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> marks[i];
        sum += marks[i];
    }

    double average = static_cast<double>(sum) / n;
    int highest = marks[0];

    for (int i = 1; i < n; i++) {
        if (marks[i] > highest) {
            highest = marks[i];
        }
    }

    cout << "Average: " << average << endl;
    cout << "Highest: " << highest << endl;
    cout << "Above average: ";

    for (int i = 0; i < n; i++) {
        if (marks[i] > average) {
            cout << marks[i] << " ";
        }
    }
    cout << endl;

    delete[] marks;
    marks = nullptr;

    return 0;
}