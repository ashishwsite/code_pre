// write a programe to  get formate year month days
#include<stdio.h>
int  main()
{
    int y, m, d ,n ;
    printf(" enter the number of days \n ");
    scanf(" %d  ",&n);
    y= n/365 ;
    m= (n -365*y)/30 ;
    d = (n-365*y-30*m)/7 ;
    printf("the given  formate of year month days are %d %d %d " , y,m,d );
    return 0 ;
} 