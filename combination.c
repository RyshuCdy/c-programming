#include<stdio.h>
#include<conio.h>
int fact (int n)
{
    if (n==0)
        return 1;
    else
        return (n*(fact(n-1)));

}
int main()
{
    int n, r, p;
    printf("Enter value of n : ");
    scanf("%d",&n);
    printf("Enter value of r : ");
    scanf("%d",&r);
    p=fact(n)/(fact(n-r)*fact(r));
    printf("The combination is %d",p);
  
    return 0;
}
