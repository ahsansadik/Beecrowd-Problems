#include <stdio.h>
int main()
{
    int n, a;
    char t;
    int c = 0, r = 0, s = 0, sum = 0;

    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d %c", &a, &t);
        sum += a;
        if(t == 'C')
            c += a;
        else if(t == 'R')
            r += a;
        else if(t == 'S')
            s += a;
    }

    float cp = 0.0, rp = 0.0, sp = 0.0;
    if (sum > 0) {
        cp = (c / (sum * 1.0)) * 100.0;
        rp = (r / (sum * 1.0)) * 100.0;
        sp = (s / (sum * 1.0)) * 100.0;
    }

    printf("Total: %d cobaias\n", sum);
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);
    printf("Percentual de coelhos: %.2f %%\n", cp);
    printf("Percentual de ratos: %.2f %%\n", rp);
    printf("Percentual de sapos: %.2f %%\n", sp);

    return 0;
}
