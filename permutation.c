#include<stdio.h>
#include<conio.h>
int fact (int n)
{
    if (n==0)
        return 1;
    else
        return(n*(fact(n-1)));
}
int main()
{
    int n, r, p ;
    printf("enter vlue of n\n");
    scanf("%d",&n);
    printf("enter vaue of r \n");
    scanf("%d",&r);
    p = fact(n)/fact(n-r);
    printf("the permutation is %d",p);
    getch();
    return 0;
}
