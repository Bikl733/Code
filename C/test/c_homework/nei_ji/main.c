#include "stdio.h"
int Input(float * a)
{
    int Num;
    printf("请输入向量的维数：");
    scanf("%d",&Num);
    printf("\n请输入向量 ：\n");
    for (int i = 0; i < Num; i++)
    {
        scanf("%f", a + i);
    }
    return Num;
}

int max(int x,int y)
{
    if (x>y)
    {
        return x;
    }
    else
        return y;
}

float sum(float *a,int Num)
{
    int i=0;
    float * ptr=a + Num;
    do
    {
       i += *a; 
    } while (a++<ptr);
    return i;
}

void iproduct(float * a, float * b,int Num)
{
    for (int i = 0; i < Num; i++)
    {
        *(a+i)=*(a+i) * *(b+i); 
    }
    printf("%f",sum(a,Num));
}

void main()
{   
    float a[100],b[100];
    int Num_a=Input(a),Num_b=Input(b);
    iproduct(a,b,max(Num_a,Num_b));
}