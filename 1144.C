#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);

    for(int i = 1 ; i <= a; i++)
    {
        printf("%d %d %d\n", i, i*i, i*i*i);
        printf("%d %d %d\n", i, (i*i)+1, (i*i*i)+1);
    }
}
