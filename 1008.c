#include<stdio.h>
int main()
{
    int n, h;
    float s, total;
    scanf("%d %d %f", &n, &h, &s);
    total = s*h;
    printf("NUMBER = %d\n", n);
    printf("SALARY = U$ %.2f\n", total);
}


