#include<stdio.h>
int main()
{
    long long int n, i, sum=0, count=0;
    scanf("%lld", &n);
    long long int arr[n];
    long long int arr1[n];

    for (i=0; i<n; i++)
    {
        scanf("%lld", &arr[i]);
        arr1[i]=arr[i];
    }
    i=0;
    while(arr[i]!=0 && (i>=0 && i<n))
    {
        if(arr[i]%2==0)
        {
            arr[i]--;
            i--;
        }
        else if(arr[i]%2!=0)
        {
            arr[i]--;
            i++;
        }
    }
    for (i=0; i<n; i++)
    {
        sum=sum+arr[i];
        if(arr1[i]!=arr[i])
            count++;
    }
    printf("%lld %lld\n", count, sum);
}
