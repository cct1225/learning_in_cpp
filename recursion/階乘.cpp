#include <iostream> 
using namespace std; 
int Func(int num)
{   
    int sum;
    if(num==1)  return 1;
    else    
    {
        return num*Func(num-1);
    }
}
int main(){
    int num;
    cin>>num;
    cout<<Func(num);
    return 0;
}
