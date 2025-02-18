#include <stdio.h>
int main()
{
    int n, number, temp, isPrime;

    while(scanf("%d", &number) !=EOF)

    {
        isPrime = 1;

        if (number <= 1)
        {
            isPrime = 0;
        }
        else
        {
            for (int j = 2; j * j <= number; j++)
            {
                if (number % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }

        int all_prime = 1;
        temp = number;

        while (temp > 0)
        {
            int digit = temp % 10;

            if (digit != 2 && digit != 3 && digit != 5 && digit != 7)
            {
                all_prime = 0;
                break;
            }
            temp /= 10;
        }

        if (all_prime == 1 && isPrime == 1)
        {
            printf("Super\n");
        }
        else if (all_prime == 0 && isPrime == 1)
        {
            printf("Primo\n");
        }
        else
        {
            printf("Nada\n");
        }
    }

    return 0;
}
