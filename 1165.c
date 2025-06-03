#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while(t)
    {
        int x;
        scanf("%d", &x);

        int flag = 1;

        if(x<=1)
        {
            flag = 0;
        }
        else
        {
            for(int i = 2 ; i*i <= x ; i++)
            {
                if(x%i==0)
                {
                    flag = 0;
                }
            }
        }

        if(flag==1)
        {
            printf("%d eh primo\n", x);
        }
        else if(flag==0)
        {
            printf("%d nao eh primo\n", x);
        }
        t--;
    }
}
