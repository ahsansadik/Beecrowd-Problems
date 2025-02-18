#include<stdio.h>
int main()
{
    double a, b, m;
    int x;

    do{
    scanf("%lf", &a);
    while(a<0 || a>10){
    printf("nota invalida\n");
    scanf("%lf", &a);
    }

    scanf("%lf", &b);
    while (b<0 || b>10){
    printf("nota invalida\n");
    scanf("%lf", &b);
    }

    m=(a+b)/2;
    printf("media = %.2lf\n", m);

    printf("novo calculo (1-sim 2-nao)\n");

    scanf("%d", &x);

    while(x<1 || x>2){
    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%d", &x);
    }

    if(x==2){
        return 0;
    }

    } while (x==1);
}
