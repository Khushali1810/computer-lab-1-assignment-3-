#include <stdio.h>
int main() 
{
    int count=0;
    for(int n=2; n<=500; n=n+1) {
        int flag=1;
        for(int i=2; i<=n/2; i=i+1) {
            if(n % i == 0) {flag=0; break;}
        }
        if(flag=1) {count=count+1;}
    }
    printf("Count of primes = %d\n", count);
    return 0;
}
