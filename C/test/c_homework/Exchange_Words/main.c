#include "stdio.h"
#define Num 100
void A2a(char *ptr,char *end)
{
    do
    {
       if (*ptr >= 'A' && *ptr <= 'Z')
       {
        *ptr+=32;
       }  
    } while (ptr++<end);
}

void a2A(char *ptr,char *end)
{
 do
    {
       if (*ptr >= 'a' && *ptr <= 'z')
       {
        *ptr-=32;
       }  
    } while (ptr++<end);
}

void main()
{
    char a[Num]="This IS a Test!";
    // A2a(a,a+Num);
    a2A(a,a+Num);
    printf("%s\n",a);
}