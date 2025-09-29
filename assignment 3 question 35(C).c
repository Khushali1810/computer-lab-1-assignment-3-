#include <stdio.h>
int main() 
{
    for(int i=1; i<=2; i=i+1) {
        for(int j=1; j<=2; j=j+1) {
            for(int k=1; k<=2; k=k+1) {
                printf("%d %d %d\n", i, j, k);}
        }
    }
    return 0;
}
