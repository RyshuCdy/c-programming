#include<stdio.h>
#include<conio.h>
int fact (int n)
{
    if(n==0)
        return 1;
    else
        return(n*(fact(n-1)));
}
int main()
{
    int n,f;
    printf("enter a num :");
    scanf("%d",&n);
    f=fact(n);
    printf("\n fatorial of %d=%d",n,f);
    return 0;
}
