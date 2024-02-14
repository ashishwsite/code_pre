#include<stdio.h>
int fact(int n);
int main()
{
    int i ,result ;
    printf("enter a number which factorial you wanted to find ");
    scanf("%d",&i);
    result=fact(i);
    printf("the factorial of given number is %d",result);
    return 0 ;
}
int fact(int n)
{
if (n==0)
return 1;
else if (n==1)
return 1;
else
return n*fact(n-1);
}