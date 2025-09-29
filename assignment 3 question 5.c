#include <stdio.h>
int main() 
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=1; i<=n; i=i+1) {
        printf("%d ", 2*i-1);}
    return 0;
}
