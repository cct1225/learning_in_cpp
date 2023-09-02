#include<iostream>
#include<algorithm>
using namespace std;

template<typename T>

void sorting(T arr[],int size)
{
   int i,j,min;
   for(i=0;i<size;i++)
   {
        for(j=i,min=i;j<size;j++)
        {
            if(arr[j]<arr[min]) min=j;
        }
        swap(arr[i],arr[min]);
   }
   for(i=0;i<size;i++)
   {
        cout<<arr[i]<<" ";
   }
    cout<<endl;


    /*sort(arr,arr+size);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
    */
   
}

int main()
{
    int arr1[5]={10,60,31,14,5};
    float arr2[5]={2.1,0.5,3.3,6.5,1.2};
    string arr3[5]={"Andy","Kevin","James","Jason","Ken"};

    sorting(arr1,5);
    sorting(arr2,5);
    sorting(arr3,5);
    return 0;
}



    