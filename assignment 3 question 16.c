#include <stdio.h>
int main() 
{
    int n, max, min;
    printf("Enter number 1:");
    scanf("%d", &n);
    max = min = n;
    for(int i=2; i<=100; i=i+1) {
        printf("Enter number %d:", i);
        scanf("%d", &n);
        if(n > max) {max = n;}
        if(n < min) {min = n;}
        }
    printf("Largest = %d, Smallest = %d", max, min);
    return 0;
}
