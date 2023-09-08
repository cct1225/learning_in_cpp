#include<iostream>

using namespace std;
int main()
{
    int G[101][101],D[101],V[101];
    int k,i,j;
    int count=0;
    int time=0;
    int n,p;// declare vertex, path
    cin>>n>>p;
    int a,b,l;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j)    G[i][j]=0;
            else    G[i][j]=10000000;
        }
    }
    
    for(i=1;i<=p;i++)
    { 
        cin>>a>>b>>l;
        G[a][b]=l;
        G[b][a]=l;//無向圖
    }
    for(i=0;i<=n;i++) 
    {
        D[i]=100000000;
        V[i]=0;
    }
    D[1]=0;
   
    while(1)
    {
        for(i=1,k=0;i<=n;i++)
        {
            if(V[i]==0&&D[i]<D[k])  
            {
                k=i;//只是判斷現在要用哪個點
            }
        }
        if(k==0)    break;
        V[k]=1;
        for(i=1;i<=n;i++)
    {
        if(D[k]+G[k][i]<D[i])
        {
            D[i]=D[k]+G[k][i];
        }
    }

        
    }
    for(i=1;i<=n;i++)
    {
        cout<<D[i]<<" ";
    }
    cout<<endl;
}

/*input:
5 7
1 2 5
1 5 1
2 3 7
2 4 1
2 5 2
3 4 2
4 5 6

output:0 3 6 4 1
*/