#include <stdio.h>

int main() {
    int t, total = 0;
    int coelhos = 0, ratos = 0, sapos = 0;

    scanf("%d", &t);
    int original_t = t;

    while (t--) {
        int x;
        char tipo;
        scanf("%d %c", &x, &tipo);

        total += x;

        if (tipo == 'C') {
            coelhos += x;
        } else if (tipo == 'R') {
            ratos += x;
        } else if (tipo == 'S') {
            sapos += x;
        }
    }

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);

    printf("Percentual de coelhos: %.2f %%\n", (float)coelhos / total * 100);
    printf("Percentual de ratos: %.2f %%\n", (float)ratos / total * 100);
    printf("Percentual de sapos: %.2f %%\n", (float)sapos / total * 100);

    return 0;
}
