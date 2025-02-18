#include <stdio.h>

int main() {
    double N;
    int banknotes, coins;


    scanf("%lf", &N);


    int amount = (int)(N * 100 + 0.5);


    printf("NOTAS:\n");

    banknotes = amount / 10000;
    printf("%d nota(s) de R$ 100.00\n", banknotes);
    amount %= 10000;

    banknotes = amount / 5000;
    printf("%d nota(s) de R$ 50.00\n", banknotes);
    amount %= 5000;

    banknotes = amount / 2000;
    printf("%d nota(s) de R$ 20.00\n", banknotes);
    amount %= 2000;

    banknotes = amount / 1000;
    printf("%d nota(s) de R$ 10.00\n", banknotes);
    amount %= 1000;

    banknotes = amount / 500;
    printf("%d nota(s) de R$ 5.00\n", banknotes);
    amount %= 500;

    banknotes = amount / 200;
    printf("%d nota(s) de R$ 2.00\n", banknotes);
    amount %= 200;

    // Coins
    printf("MOEDAS:\n");

    coins = amount / 100;
    printf("%d moeda(s) de R$ 1.00\n", coins);
    amount %= 100;

    coins = amount / 50;
    printf("%d moeda(s) de R$ 0.50\n", coins);
    amount %= 50;

    coins = amount / 25;
    printf("%d moeda(s) de R$ 0.25\n", coins);
    amount %= 25;

    coins = amount / 10;
    printf("%d moeda(s) de R$ 0.10\n", coins);
    amount %= 10;

    coins = amount / 5;
    printf("%d moeda(s) de R$ 0.05\n", coins);
    amount %= 5;

    coins = amount / 1;
    printf("%d moeda(s) de R$ 0.01\n", coins);

    return 0;
}
