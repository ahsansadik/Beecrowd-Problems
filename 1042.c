#include<stdio.h>
int main()
{
    int a, b, c, A, B, C;
    scanf("%d %d %d", &a, &b, &c);

    if(a>b && b>c)
    {
        A = a;
        B = b;
        C = c;
    }
    else if(a>c && c>b)
    {
        A = a;
        B = c;
        C = b;
    }
    else if(b>c && c>a)
    {
        A = b;
        B = c;
        C = a;
    }
    else if(b>a && a>c)
    {
        A = b;
        B = a;
        C = c;
    }
    else if(c>a && a>b)
    {
        A = c;
        B = a;
        C = b;
    }
    else if(c>b && b>a)
    {
        A = c;
        B = b;
        C = a;
    }
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", C, B, A, a, b, c);
}
