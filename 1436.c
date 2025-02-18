#include <stdio.h>
int main()
{
int t;
scanf("%d", &t);

for (int k=1; k<=t; k++)
{
    int n, i, j, temp;
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    int m=n/2;
    printf("Case %d: %d\n", k, arr[m]);
}
return 0;
}
