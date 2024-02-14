#include<stdio.h>
int main()
{
    printf(" enter the number you wanted to checked whether is prime   or not ");
    int a ;
    scanf(" %d",&a);
    int i ,c ,d ;
    d= a-1 ;
    for( i=2; i<d ; i++)
     {
        c = a%i ;
        if(c==0)
        break;
     }   
    if(c==0)
    printf( "the number is not prime ");
    else
    printf( " the no is prime ");
    return 0 ;
}    
