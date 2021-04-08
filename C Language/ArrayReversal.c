#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,array[5000],i;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=num-1;i>=0;i--)
    {
        printf("%d ",array[i]);
    }
}
