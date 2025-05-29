#include<stdio.h>
int main()
{
    int t;
    while(scanf("%d", &t)!=EOF)
    {
        float min = 100.00, x;
        for(int i = 0 ; i < t; i++)
        {
            scanf("%f", &x);
            if(x<min)
            {
                min = x;
            }
        }
        printf("%.2f\n", min);
    }
}
