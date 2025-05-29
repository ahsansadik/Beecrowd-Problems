#include<stdio.h>
#include<math.h>

int main()
{
    float g;
    int rem;
    scanf("%f", &g);

    int f = (int)round(g * 100);

    int n100 = f / 10000;
    rem = f % 10000;

    int n50 = rem / 5000;
    rem = rem % 5000;

    int n20 = rem / 2000;
    rem = rem % 2000;

    int n10 = rem / 1000;
    rem = rem % 1000;

    int n5 = rem / 500;
    rem = rem % 500;

    int n2 = rem / 200;
    rem = rem % 200;

    int n1 = rem / 100;
    rem = rem % 100;

    int p50 = rem / 50;
    rem = rem % 50;

    int p25 = rem / 25;
    rem = rem % 25;

    int p10 = rem / 10;
    rem = rem % 10;

    int p5 = rem / 5;
    rem = rem % 5;

    int p1 = rem / 1;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n", n50);
    printf("%d nota(s) de R$ 20.00\n", n20);
    printf("%d nota(s) de R$ 10.00\n", n10);
    printf("%d nota(s) de R$ 5.00\n", n5);
    printf("%d nota(s) de R$ 2.00\n", n2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", n1);
    printf("%d moeda(s) de R$ 0.50\n", p50);
    printf("%d moeda(s) de R$ 0.25\n", p25);
    printf("%d moeda(s) de R$ 0.10\n", p10);
    printf("%d moeda(s) de R$ 0.05\n", p5);
    printf("%d moeda(s) de R$ 0.01\n", p1);

}
