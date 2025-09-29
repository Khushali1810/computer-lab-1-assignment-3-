#include <stdio.h>
int main() 
{
    int n, t, sum=0, d;
    printf("Enter number:");
    scanf("%d", &n);
    t=n;
    while(t!= 0) {
        d = t % 10;
        sum += d*d*d;
        t /= 10;}
    if(sum == n) {printf("Armstrong\n");}
    else {printf("Not Armstrong\n");}
    return 0;
}
