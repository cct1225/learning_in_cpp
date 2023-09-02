#include<iostream>
#include<stack>
using namespace std;
int main(){
    /*stack<int> mystack;
    mystack.push(1);//     1
    mystack.push(2);//   2 1
    mystack.push(3);// 3 2 1
    cout << mystack.size() << "\n"; // 3
    while(!mystack.empty())
    {
        cout<<mystack.top();
        mystack.pop();
    }*/
    
    stack<int> mystack;
    // std::cout << mystack.top() << "\n"; // Segmentation fault
    if (!mystack.empty())
        std::cout << mystack.top() << "\n";
    mystack.push(1);
    mystack.push(2);
    mystack.push(3);
    if (!mystack.empty())
        std::cout << mystack.top() << "\n"; // 3







}