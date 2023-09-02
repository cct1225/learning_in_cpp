#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2(v1.begin()+2, v1.end()-1); // {3, 4}
    for(int i=0;i<v2.size();i++)
    {  
        cout<<v2.at(i);
    }
    return 0;
   
    int n[5] = {1, 2, 3, 4, 5};
    vector<int> v(n+2, n+4); // {3, 4}
    
    vector<int> v = {1, 2, 3};
    cout << v[0] << "\n"; // 1
    cout << v[1] << "\n"; // 2
    v[0] = 4;
    cout << v[0] << "\n"; // 4



}