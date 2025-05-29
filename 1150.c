#include<stdio.h>
int main()
{
    int x, y, count=0, sum=0;
    scanf("%d %d", &x, &y);

    while(x>y || x==y)
    {
        scanf("%d", &y);
    }

    for(int i = x; ; i++)
    {
        sum=sum+i;
        count++;
        if(sum>y)
        {
            break;
        }
    }
    printf("%d\n", count);

}
