#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a[10001];
    int count=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;


    }
