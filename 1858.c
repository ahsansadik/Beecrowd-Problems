#include<stdio.h>
int main()
{
    int n, position=1, i, j;
    scanf("%d", &n);

    int arr[n];

    for (i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int lowest=arr[0];

    for (j=0; j<n; j++)
    {
        if(arr[j]<lowest)
        {
        lowest=arr[j];
        position=j+1;
        }
    }
    printf("%d\n", position);
return 0;
}
