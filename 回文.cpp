#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string str;
    cin>>str;
    string examine;
    examine=str;
    reverse(examine.begin(),examine.end());
    if(examine==str)    cout<<"yes";
    return 0;
}



#include <iostream>  
#include<string>  
using namespace std;  
  
int main()  
{  
    string s,t;  
    int l,i; 
    cin>>s;  
    l=s.length();  
    t="";  
    for(i=l-1;i>=0;i--)  
    {  
        t+=s[i];      
    }  
    if(t==s)    cout<<"YES";  
    else if(t!=s)   cout<<"NO";  
    return 0;  
}  

