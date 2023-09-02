#include <iostream>
using namespace std;

int main() {
  int i = 42;
  int *p = &i;            //p指向i
  cout << *p << endl;     //印出指標p所指向物件i的值，即42

  *p = 0;                //因為p指向i，所以實際是i的值被改變成0
  cout << i <<endl;      //印出指標p所指向物件i的值，即0
  return 0;
}


/*
指標本身儲存的值，有三種情況
1. 指向一個物件，值裡面存放另一個物件的位址
2. 指向另一個物件尾端後的位置
3. 沒有指向任何物件，值即為null
*/

#include <iostream>
using namespace std;

int main() {
  int i = 42;     
  int &r = i;       //& 跟在一個型別，且是宣告的一部份，所以r是一個reference
  int *p;           //* 跟在一個型別，且是宣告的一部份，所以p是一個pointer
  p = &i;           //& 被用在運算式中，做為address-of 運算子
  *p = i;           //* 被用在運算式中，做為dereference運算子
  int &j = *p;      //& 是宣告的一部分；* 是dereference運算子

  cout << "i: " << i << endl;    //42
  cout << "&i: " << &i << endl;  //0x38b69ffb84
  cout << "r: " << r << endl;    //42
  cout << "&r: " << &r << endl;  //0x38b69ffb84
  cout << "*p: " << *p << endl;  //42
  cout << "p: " << p << endl;    //0x38b69ffb84
  cout << "j: " << j << endl;    //42
  cout << "&j: " << &j << endl;  //0x38b69ffb84
  return 0;
}



