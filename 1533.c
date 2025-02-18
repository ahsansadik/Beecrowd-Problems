#include <stdio.h>

int main() {
    int n, i, max1, max2, max1p, max2p;

    while(1)
    {
    scanf("%d", &n);
    if(n==0)
        return 0;
    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    max1 = max2 = arr[0];
    max1p = max2p = 1;

    for (i = 1; i < n; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max2p=max1p;
            max1 = arr[i];
            max1p=i+1;
        }
        else if (arr[i] > max2 && arr[i] != max1)
        {
            max2 = arr[i];
            max2p=i+1;
        }
    }

    printf("%d\n", max2p);
    }
}
