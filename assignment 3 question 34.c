#include <stdio.h>
int main() 
{
    int n, a=1, b=1, c;
    printf("Enter n:");
    scanf("%d", &n);
    printf("Fibonacci Series: %d %d ", a, b);
    for(int i=3; i<=n; i=i+1) {
        c = a + b;
        printf("%d ",c);
        a = b;
        b = c;}
    return 0;
}
