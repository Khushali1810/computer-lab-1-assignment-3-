#include <stdio.h>
int main()
{
    int n, t, rev=0;
    printf("Enter number: ");
    scanf("%d", &n);
    t = n;
    while(t!= 0) {
        rev = rev*10 + t%10;
        t/= 10;}
    if(rev == n) printf("Palindrome\n");
    else printf("Not Palindrome\n");
    return 0;
}
