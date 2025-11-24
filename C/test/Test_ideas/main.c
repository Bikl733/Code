#include <stdio.h>

int main()
{
    double x=1,y=2,t,z,sum=0;
    for (int i = 1; i <= 20; i++)
    {
        z=x/y;
        sum+=z;
        t=x; 
        x=y;
        y=t+y;
    }
    printf("SUM=%lf\n",sum);
    return 0;
}