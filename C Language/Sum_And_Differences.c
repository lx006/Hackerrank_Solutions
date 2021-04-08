#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int m,n,sum,diff;
    float a,b,fsum,fdiff;
    scanf("%d %d",&m,&n);
    scanf("%f %f",&a,&b);
    sum=m+n;
    diff=m-n;
    fsum=a+b;
    fdiff=a-b;
    printf("%d %d\n",sum,diff);
    printf("%.1f %.1f",fsum,fdiff);

    
    return 0;
}
