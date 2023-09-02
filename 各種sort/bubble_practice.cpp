#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a[100001];
    int count=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>=a[j+1])    
            {
                swap(a[j],a[j+1]);
                count++;
            }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<count;
    return 0;


    }
}