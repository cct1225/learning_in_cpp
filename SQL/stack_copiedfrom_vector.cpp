#include <iostream>
#include<vector>
#include<stack>
using namespace std;
int main() {
    vector<int> myvector = {1, 2};
    stack<int, vector<int>> mystack2(myvector);
    while(!mystack2.empty())
    {
        cout<<mystack2.top()<<" ";//21
        mystack2.pop(); 
    }
    return 0;
}
