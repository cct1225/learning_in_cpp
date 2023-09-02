#include <iostream>
#include <string>
using namespace std;

int main() {
    char name[5] = "Tom";
    cout << name << "\n";

    const char * name2 = "Amy";  // 指標的值可以修改，但指向的內容不能修改
    //name2[0] = 'B'; // compile error, 不可修改 name2 指向的內容
    name2 = name; // 可以修改 name2 指標
    cout << name2 << "\n";

    const char * const name3 = "Amy"; //指標的值和指向的內容都不能修改
    //name3 = name; // compile error, 不可修改 name3 指標本身

    return 0;
}



用 const 宣告的變數，必須使用對應的 const 型態指標才可以：
const int n = 10;
const int *p = &n;