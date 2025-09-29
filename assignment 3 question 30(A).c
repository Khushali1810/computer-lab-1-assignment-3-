#include <stdio.h>
int main() 
{
    int j=5;
    for(int i=1; i<=5; i=i+1) {
        printf("%d %d\n", i, j);
        j=j-1;
    }
    return 0;
}
