#include<stdio.h>
int main()
{
    int n, position;
    scanf("%d", &n);

    int arr[n];

    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int lowest=arr[0];

    for (int i=1; i<n; i++)
    {
        if(arr[i]<lowest)
        {
        lowest=arr[i];
        position=i;
        }
    }
    printf("Menor valor: %d\n", lowest);
    printf("Posicao: %d\n", position);
return 0;
}
