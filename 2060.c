#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n ; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 2 ; i < 6 ; i++)
    {
        int count = 0;
        for(int j = 0 ; j < n ; j++)
        {
            if(arr[j]%i==0)
            {
                count++;
            }
        }
        printf("%d Multiplo(s) de %d\n", count, i);
    }
}
