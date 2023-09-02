#include <iostream>

using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    cout<<arr<<endl; //arr本身指上述陣列的第一個元素的位置 //output:0x6159dff990
    cout<<&arr[0]; //output:0x6159dff990
}


int myNumbers[5] = {10, 20, 30, 40, 50};
cout << sizeof(myNumbers);//5*4bytes=20btyes
cout<< sizeof(myNumbers) / sizeof(int);//才是長度= 5



int main()
{
 char *ptr = "GeeksQuiz";
 printf("%c", *&*&*ptr);
 return 0;
}


float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
float *ptr1 = &arr[0];
float *ptr2 = ptr1 + 3; //就是arr[3]

printf("%f ", *ptr2);
printf("%d", ptr2 - ptr1);//這在計算ptr2 到 ptr1 之間有多少元素 也就是3個元素