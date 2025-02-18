#include<stdio.h>
int main()
{

int a,b,c;
scanf ("%d %d %d", &a, &b, &c);

if ( a > b && b > c)
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", c,b,a,a,b,c);
else if ( a > c && c > b)
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", b,c,a,a,b,c);
else if ( b > a && a > c)
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", c,a,b,a,b,c);
else if ( b > c && c > a)
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", a,c,b,a,b,c);
else if ( c > a && a > b)
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", b,a,c,a,b,c);
else
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", a,b,c,a,b,c);
return 0;
}
