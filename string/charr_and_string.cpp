#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s("aaabbbccc");
for(char c : s) {
    cout << c<<endl;
}

// aaabbbccc

for(char &c : s) //&c : 存取每一個 s 的字元的參考
{
    c += 1;
}
cout<<s;

//bbbcccddd


}