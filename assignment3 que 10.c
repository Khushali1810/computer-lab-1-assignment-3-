#include<stdio.h>
int main()
{
    int n,i;
    int fact =1;
    printf("enter a number");
    scanf("%d",&n);
    if(n<0){
            printf("factorial is not defined for negative numbers.\n");
    }
    else{
    for(i=1;i<= n;i++){
        fact = fact*i;
    }

    printf("factorial of %d =% d\n",n,fact);
    }
    return 0;
}
