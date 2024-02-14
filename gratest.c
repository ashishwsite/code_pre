#include<stdio.h>
int main()
{
    int a [] = {87,56,58,4,23,12,73,10,6  };
    int max = a [0] ;
    for(int i=1; i< 11; i++)
    {
        if(max<a[i])
         {
             max = a[i];
         }
    }     
      printf( "  the gratest off these are %d", max);
    
   return 0 ;
} 