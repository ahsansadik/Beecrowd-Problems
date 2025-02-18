#include<stdio.h>
int main ()
{
float x, lowest;
int n;
while(scanf("%d", &n) !=EOF)
{
    float arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%f", &arr[i]);
    }
    lowest=arr[0];
    for(int i=1; i<n; i++)
    {
        if(arr[i]<lowest)
        {
            lowest=arr[i];
        }
    }
    printf("%.2f\n", lowest);
}
}
