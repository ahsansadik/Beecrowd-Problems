#include<stdio.h>
int main()
{
    int x, y, count=0;
    scanf("%d %d", &x, &y);

    for(int i = 1 ; i <= y; i++)
    {
        if(count==x-1)
        {
            count=0;
            printf("%d\n", i);
        }
        else
        {
            printf("%d ", i);
            count++;
        }
    }
}
