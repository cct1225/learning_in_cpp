#include <stdio.h>
#include <math.h>
int main() {
    int a,b;
    while(scanf("%d%d", &a, &b)!=EOF) {
        int num=0;
        for(int i=a;i<=b;i++) {
            int test=0;
            for(int j=2;j<=ceil((int)sqrt(i));j++) /*因為除了完全平方數另有一個因數是自己的根號以外，
                                                     基本上所有數字的因數都是兩兩成對，
                                                     因此可以只檢查到該數的根號就好*/
                if(i%j==0) { /*只要該數有找到一個因數，就可以直接換下一個數了*/
                    test++;
                    break;
                }
            if(test==0)
                num++;
        }
        if(a==1 || b==1)num--;
        printf("%d\n", num);
    }
    return 0;
}