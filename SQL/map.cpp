#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    map<int, string> studentMap;
    studentMap.insert(pair<int, string>(1, "Tom"));

    pair<map<int, string>::iterator, bool> retPair;
    retPair = studentMap.insert(pair<int, string>(1, "Tom"));  
    
    if (retPair.second == true)
        cout << "Insert Successfully\n";
    else
        cout << "Insert Failure\n";

    return 0;
}
