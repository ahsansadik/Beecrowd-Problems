#include<stdio.h>
int main()
{
    while(1)
    {
        int t;
        scanf("%d", &t);

        if(t==0)
        {
            break;
        }

        int x = 0, y =0;

        for (int i = 0 ; i < t; i++)
        {
            int a, b;
            scanf("%d %d", &a, &b);

            if(a>b)
            {
                x++;
            }
            else if(b>a)
            {
                y++;
            }
        }
        printf("%d %d\n", x, y);
    }
}
