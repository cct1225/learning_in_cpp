#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    int l = str.size();

    for (int i = 0; i < l; i++) 
    {
        if(char(str[i])!=' ') 
        {
            for (int j = 0; j < l; j++) 
        {
            if (j == i) 
            {
                
                if (islower(str[j])) 
                {
                    cout << char(toupper(str[j]));
                } 
                else 
                {
                    cout << str[j];
                }
            } 
            else 
            {
                if(isupper(str[j]))
                {
                    cout << char(tolower(str[j]));
                }
                else    cout<<str[j];
                
            }
        }
        cout << endl;

        }
        
    }
}
