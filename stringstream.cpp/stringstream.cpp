#include <iostream>
#include <sstream>
using namespace std;
int main() {
    stringstream ss;
    int num = 42;
    string text = "Hello";

    ss << "The number is: " << num << " and the text is: " << text;
    cout << ss.str() << endl;
    // The number is: 42 and the text is: Hello
    return 0;
}


#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main() {
    stringstream ss("123 45.67 Hello");
    int num;
    double decimal;
    string text;

    ss >> num >> decimal >> text;
    cout << "Num: " << num << ", Decimal: " << decimal << ", Text: " << text << endl;
    // Num: 123, Decimal: 45.67, Text: Hello

    return 0;
}
