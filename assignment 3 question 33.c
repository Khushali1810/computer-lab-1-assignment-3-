#include <stdio.h>
int main()
{
    int a,b,n,count=0,d=1;
    printf("enter number\n");
    scanf("%d",&n);
    a=n;
    while(a>10){
      a=a/10;
      count++;}
    for(int i=1;i<=count;i++){
        d=d*10;}
    b=n%d;
    if(b*b==n){
      printf("the number is automorphic");}
    else{
      printf("the number is not automorphic");}
    return 0;
}
