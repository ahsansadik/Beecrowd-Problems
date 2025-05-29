#include<stdio.h>
int main()
{
    int max = 0, n, pos;

    for(int i = 1; i <= 10; i++)
    {
        scanf("%d", &n);
        if(n>max)
        {
            max=n;
            pos=i;
        }
    }
    printf("%d\n", max);
    printf("%d\n", pos);
}
