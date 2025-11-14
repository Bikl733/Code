 #include"stdio.h"
// int add(int x,int y)
// {
//     int z;
//     z= x + y;
//     return (z);
// }
// void main()
// {
//     int i=1,sum;
//     sum=add(i,++i);
//     printf("SUM = %d\n",sum);
// }
int prime(int n)
{
    int i,flag=1;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }
    return flag;
}
void div(int n)
{
    int n1,n2;
    for ( n1 = 3; n1 < n/2; n1++)
    {
        n2=n - n1;
        if(prime(n1) && prime(n2))
        {
            printf("%d + %d = %d\n",n1,n2,n);
        }   
    }
    
}
void main()
{
    int num;
    do
    {
        printf("Input n(>=6):");
        scanf("%d",&num);
    } while (!(num>=6&&num%2==0));
    div(num);
}