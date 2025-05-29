#include<stdio.h>
int main()
{
    int x, y, d, m, rem;
    scanf("%d", &x);

    y = x/365;
    rem = x%365;
    m=rem/30;
    d=rem%30;
    printf("%d ano(s)\n", y);
    printf("%d mes(es)\n", m);
    printf("%d dia(s)\n", d);

}
