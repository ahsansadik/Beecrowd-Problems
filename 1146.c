#include<stdio.h>
int main()
{
    while(1)
    {
        int x, i;
        scanf("%d", &x);
        if(x==0)
        {
            break;
        }

       for(i = 1 ; i < x ; i++)
       {
           printf("%d ", i);
       }
       printf("%d\n", i);
    }
}
