#include"stdio.h"
int main()
{
    unsigned int s,v,t;
    scanf("%u%u",&s,&v);
    t=480-10-s*v;
    printf("0%d:%d%d\n",t/60,t%60/10,t%60%10);
    return 0;
}