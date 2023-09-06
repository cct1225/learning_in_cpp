#include<iostream>
using namespace std;
  
    /* call by value 耗費記憶體 */
    int a = 1 ;
    int b = a ; //將a的值複製到b的新記憶體區域   
   
    /*複製而已、沒用*/


    /*Call by address (Call by pointer)*/
    void swap(int *address_a, int *address_b) {
    int temp = *address_a ; 
    cout<<temp<<endl;
    *address_a = *address_b;
    cout<<*address_a<<endl;
    *address_b = temp;
    cout<<*address_b<<endl;

    }

    int main() {

    int a = 1;
    int b = 0;

   cout<< a << " " << b << endl; // 1 0

    swap(&a, &b); // 傳入a, b的address進行交換

    cout<< a << " " << b << endl; // 0 1

    return 0;
    

    /*call by reference (only available in C++)*/

    void swap(int &address_a, int &address_b)
    {
        int temp = address_a ; 
        address_a = address_b;
        address_b = temp;
    }   

    int main() {

        int a = 1;
        int b = 0;

        cout<< a << " " << b << endl; // 1 0

        swap(a, b); // 傳入a, b的address進行交換

        cout<< a << " " << b << endl; // 0 1

        return 0;
}




     
    
