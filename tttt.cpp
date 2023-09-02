#include<iostream>
using namespace std;
int main(){
    int r,c;
    while(cin>>r>>c)
    {
        int a[c+1],b[c+1];
        for(int i=0;i<c;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<c;i++)
        {
            cin>>b[i];
        }
        for(int i=0;i<c;i++)
        {
            for(int j=0;j<r;j++)
            {
                cout<<a[j]<<" "<<b[j];
            }
        }



    }






}