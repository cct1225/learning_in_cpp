#include<bits/stdc++.h>
using namespace std;

struct my_struct{
    int x;
    double y;
    string s;
} c;//要有分號

int main(){
    my_struct a;
    a.x = 45;
    a.y = 55.232;
    a.s = "This is a string";

    my_struct b{1,1.23,"Another way of declaration."}; // 另一種宣告方法

    cout<<a.x<<" "<<a.y<<" "<<a.s<<'\n';
    cout<<b.x<<" "<<b.y<<" "<<b.s<<'\n';
    c.x = 10;
    cout<<c.x<<'\n';
}