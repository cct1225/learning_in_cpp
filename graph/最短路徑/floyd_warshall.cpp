#include<iostream>
using namespace std;
int main()
{
    int v,p;// v is vertex and p is path
    cin>>v>>p;
    int G[101][101]={0};
    int a,b,l;
    while(cin>>a>>b>>l)
    {
        
        G[a][b]=l;
        G[b][a]=l;//無向圖
    }
    for(int i=1;i<=v;i++)
    {
        for(int j=1;j<=v;j++)
        {
            cout<<G[i][j]<<" ";//to ensure that the input is inputted correctly
        }
        cout<<endl;
    }

    
    
    for(int i=1;i<=v;i++)
    {
        for(int j=1;j<=v;j++)
        {
            if(G[i][j]==0)
            {
                if(i==j)    G[i][j]=0;
                else    G[i][j]=1000000;
            }
            
            
        }
    }


    for(int i=1;i<=v;i++)
    {
        for(int j=1;j<=v;j++)
        {
            for(int k=1;k<=v;k++)
            {
                if(G[i][j]+G[i][k]<G[j][k])
                {
                    G[j][k]=G[i][j]+G[i][k];
                }
            }
        }
    }
    for(int i=1;i<=v;i++)
    {
        for(int j=1;j<=v;j++)
        {
            cout << G[i][j] << " ";
        }
        cout<<endl;
    }









}