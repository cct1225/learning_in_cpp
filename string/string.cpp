#include <iostream> 
#include <string> 
using namespace std; 

int main() { 

    string name = "caterpillar";
    for(int i = 0; i < name.length(); i++) {
        cout << name[i] << endl;
    }
    cout<<endl;

    string sentence="Rosariaaaaa";
    sentence.replace(6,10,"a");
    cout<<sentence<<endl;

    string badword="motherfurther";
    cout<<badword.find("further",0)<<endl; //從第六個開始有further這個字(從0開始尋找)
    cout<<badword.substr(0,6);



    /*
    string str1 = "hello";
    string str2("world");
    string str3;

    str3.append(str1).append(" ").append(str2);
    
    cout << str3 << "\n";

    string str1 = "hello";
    string str2("world");
    string str3;

    str3 += str1;
    str3 += " ";
    str3 += str2;
    
    cout << str3 << "\n"; 
    */

    return 0;







}