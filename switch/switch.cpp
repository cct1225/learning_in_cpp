#include <iostream>
using namespace std;

int main() { 
    int score = 0; 

    cout << "enter score:"; 
    cin >> score; 

    switch(score / 10) { 
        case 10: case 9: 
            cout << "A" << endl; 
            break; 
        case 8: 
            cout << "B" << endl; 
            break; 
        case 7: 
            cout << "C" << endl; 
            break; 
        case 6: 
            cout << "D" << endl; 
            break; 
        default: 
            cout << "E(Fail)" << endl; 
            break;
    } 

    return 0;
}