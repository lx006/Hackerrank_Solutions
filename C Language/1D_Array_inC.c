#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
 {
     int array[5000],i,sum=0,a;
     scanf("%d",&a);
     for(i=0;i<a;i++)
     {
         scanf("%d",&array[i]);
     }
     for(i=0;i<a;i++)
     {
         sum=sum+array[i];
     }
     printf("%d  ",sum);
     return 0;
}
