#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int n;
    cin>>n;
    vector<int>v;
    for(int i=1;i<=n;i++)
    {
        v.push_back(i);
        cout<<i<<" ";
    }
    cout<<'\n';
    while(next_permutation(v.begin(),v.end()))
    {
        for(auto x:v)
        {
            cout<<x<<" ";
        }
        cout<<'\n';
    }
}