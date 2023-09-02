#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str,ans;
    while(cin>>str){
        
    reverse(str.begin(),str.end());
    
    for(int i=0;i<str.size();i++)
    {
        if(str[i]!='0')
        {
            ans = str.substr(i);
            break;
        }
    }
    if(ans.empty()) cout<<"0";
    else    cout<<ans;
}
}