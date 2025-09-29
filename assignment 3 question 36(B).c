#include <stdio.h>
int main() {
    int j=5;
    for(int i=1; i<=3; i=i+1) {
        for(int k=1; k<=2; k=k+1) {
            printf("%d %d\n", i, j);}
        j=j-1;}
    return 0;
}
