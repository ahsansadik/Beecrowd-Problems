#include<stdio.h>
int main()
{
    int min = 999999999, n, pos;
    scanf("%d", &n);

    int arr[n];

    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i]<min)
        {
            min=arr[i];
            pos=i;
        }
    }
    printf("%d\n", pos);
}
