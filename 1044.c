#include<stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    if(y<x)
    {
        int temp = y;
        y = x;
        x = temp;
    }

    if(y%x==0)
    {
        printf("Sao Multiplos\n");
    }
    else
    {
        printf("Nao sao Multiplos\n");
    }
}
