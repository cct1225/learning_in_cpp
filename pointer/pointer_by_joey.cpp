#include <iostream>

int(*myfunc)(int, int);

int afunc(int a, int b)
{
    return a+b;
}

int bfunc(int a, int b)
{
    return a-b;
}
int main(int argc,char *argv[])
{
    myfunc=afunc;
    printf("%d\n",myfunc(1,2));
    myfunc=bfunc;
    printf("%d\n",myfunc(3,1));
}