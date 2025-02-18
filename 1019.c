#include<stdio.h>
int main()
{
    int s;
    scanf("%d", &s);

    int hour=s/3600;
    int rem=s%3600;
    int min=rem/60;
    s=rem%60;
    printf("%d:%d:%d",hour,min, s);
    return 0;
}
