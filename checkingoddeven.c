#include<stdio.h>

int main()
{
    int a , c ;
    printf(" enter number you wanted to checked its odd or even \n ");
    scanf(" %d " ,&a);
    c= a%2;
    if(c==0)
    printf(" the given nuber is even ");
    else
    printf(" the given number is odd ");
    return 0 ;


}