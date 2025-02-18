#include<stdio.h>
int main()
{
int i, X, Y, sum=0, sum1=0;
scanf("%d %d", &X,&Y);
if (X<Y)
{
    for(i=X; i<=Y; i++)
    {
        if (i%13!=0)
        sum=sum+i;
    }
    printf("%d\n", sum);
}

else if (Y<X)
{
    for(i=Y; i<=X; i++)
    {
        if (i%13!=0)
        sum1=sum1+i;
    }
    printf("%d\n", sum1);
}


return 0;
}
