#include<stdio.h>
int main()
{
    while(1)
    {
        int a, b, sum=0;
        scanf("%d %d", &a, &b);

        if(a==0 || b==0 || a<0 || b<0)
        {
            break;
        }

        if(a>b)
        {
            int temp = b;
            b = a;
            a = temp;
        }

        for(int i = a; i <= b; i++)
        {
            printf("%d ", i);
            sum=sum+i;

        }
        printf("Sum=%d\n", sum);
    }
}
