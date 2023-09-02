#include <iostream>
#include <string>
using namespace std;

int main() {
    int j;
    struct student{
        string name;
        int grade;
    };
    student data[2];

    for (int i = 0; i < 2; i++) {
        cout << "enter name of student " << i + 1 << ":" << endl;
        cin >> data[i].name;
        cout << "enter grade of student " << i + 1 << ":" << endl;
        cin >> data[i].grade;
    }

    cout << "Enter the index of the student to display: ";
    cin >> j;

    if (j >= 0 && j < 2) {
        cout << "Name: " << data[j].name << ", Grade: " << data[j].grade << endl;
    } else {
        cout << "Invalid index!" << endl;
    }

    return 0;
}