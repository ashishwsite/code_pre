#include<stdio.h>
void main()
{
    int a [10];
    int max , i;
    printf("enter your ten number \n ");
   // int i;
    for( i=0; i<10 ; i++ )
    {
         scanf("%d",&a [i]);
    }
   int   max=a[0] ;
    for(i=0; i<10; i++)
      {
       if(max <a[i])
       {
          max=a[i];
       }
    }  
 printf(" the gratest among these is %d ", max);

}
