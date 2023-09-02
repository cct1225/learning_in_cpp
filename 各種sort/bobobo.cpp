#include <iostream>
#include<algorithm>
using namespace std ;
int main() {
    while(cin>>n)
    {
        int a[10001],b[100001];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-i-1;j++)
        {
            if(a[j]%10>=a[j+1]%10)    
            {
                swap(a[j],a[j+1]);
                count++;
            }
    }
        


        for(int i=0;i<n;i++)
        {
            cout<<a;
        }






    }






}
}