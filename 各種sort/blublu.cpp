#include <iostream>
#include<algorithm>
using namespace std ;
int main() {
    int n;
    cin>>n;
    {
    int r[n];
    int i=0;
    for(i=0; i<n; i++)
    {
        cin>>r[i];
        for(int j=0; j<i; j++)
        {
            if(r[i]==r[j]) 
            {
                i--; 
                n--; 
                
            }
        }    
    }
    sort(r,r+i);
    cout<<i<<endl;
    for(int k=0;k<i;k++) 
    {
        cout<<r[k]<<" ";
    }
    }
    return 0;
    }

 