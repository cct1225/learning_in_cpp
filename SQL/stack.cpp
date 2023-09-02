#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> mystack;
    mystack.push(1);//     1
    mystack.push(2);//   2 1
    mystack.push(3);// 3 2 1
    cout << mystack.size() << "\n"; // 3
    while(!mystack.empty())
    {
        cout<<mystack.top();
        mystack.pop();
    }






}