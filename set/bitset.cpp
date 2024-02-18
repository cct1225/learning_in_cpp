// constructing bitsets
#include <iostream>       // std::cout
#include <string>         // std::string
#include <bitset>         // std::bitset

using namespace std;
int main ()
{
    bitset<4> foo("1001");
    bitset<4> bar("0011");

    cout << "foo: " << foo << '\n';
    cout << "bar: " << bar << '\n';

    //對foo進行運算
    cout<<(foo^=bar)  <<endl; //1010 互斥
    cout << (foo&=bar) << '\n'; //0010
    cout<<(foo|=bar)<<endl; //0011  
    cout << "foo: " << foo << '\n';
    cout << "bar: " << bar << '\n';

    std::cout << (foo&bar) << '\n';  // 0001
    std::cout << (foo|bar) << '\n';  // 1011
    std::cout << (foo^bar) << '\n';  // 1010


    cout<<endl;
    cout<<foo<<endl;
    cout<<foo.flip()<<endl;



  return 0;
}
