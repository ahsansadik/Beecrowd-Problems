#include<stdio.h>
int main()
{
    int a, b, sum=0;
    scanf("%d %d", &a, &b);

    if(a>b)
    {
        int temp = b;
        b = a;
        a = temp;
    }

    for(int i = a+1; i < b; i++)
    {
        if(i%5==2 || i%5==3)
        {
            printf("%d\n", i);
        }
    }

}
