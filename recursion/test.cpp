#include<bits/stdc++.h>
using namespace std;
int n = 5;

void print(int x, int d){
    if(x < n){
        for(int i=0;i<d;i++) cout<<" ";

        cout<<"x = " << x <<", print(x+1):\n";
        
        print(x + 1, d + 1);
        
        for(int i=0;i<d;i++) cout<<" ";        
        cout<<"x = " << x <<", print(x+2):\n";

        print(x + 2, d + 1);
        
    }
    for(int i=0;i<d;i++) cout<<" ";
    cout << x << '\n';
}

int main(){
    print(1, 0);
}