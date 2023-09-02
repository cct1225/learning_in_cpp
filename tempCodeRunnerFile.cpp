#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int n,k,b,c,a[25];
    cin>>n>>k>>b>>c;
    for(int i=0;i<n;i++)
    {
        a[i]=0;
    }
    a[k]=1;
    a[b]=1;
    a[c]=1;
    for(int i=n-1;i<=0;i--)
    {
        if(a[i]==0) cout<<"No. "<<i<<endl;
    }
}