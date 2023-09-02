#include<iostream>
#include<vector>
using namespace std;

int fail=0;

void addGrade(vector<double>&vec)
{

    double temp;
    cin>>temp;
    vec.push_back(temp);
    if(temp<60) fail++;
    cout<<"current failures:"<<fail;
    return;

}
int main(){

    vector<double>score;//score為此vector的名字
    for(int i=0;i<2;i++){
        addGrade(score);
    }
      
    return 0;


}