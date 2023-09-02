#include<iostream>
#include<ctime>
#include<stdlib.h>
using namespace std;
int main(){
    srand(time(NULL));
    cout<<rand()%10;
    return 0;
}