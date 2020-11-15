//14916 거스름돈
//https://www.acmicpc.net/problem/14916

#include<stdio.h>

int main(void)
{
        int n, coin = 0;
        scanf("%d", &n);

        while (n > 0) {
                if (n%5==0) {
                        printf("%d", coin + n/5);
                        return 0;
                }
                else{
                        n -= 2;
                        coin++;
                }

        }
        if(n==0)
                printf("%d", coin);
        else
                printf("-1");
        return 0;
}
