#include<stdio.h>
int main()
{
    int n;
    float sum=0;
    scanf("%d", &n);

    char T;
    scanf(" %c", &T);

    float arr[12][12];

    for(int i=0; i<12; i++)
    {
        for(int j=0; j<12; j++){
            scanf("%f", &arr[i][j]);
        }
    }

    if(T=='S')
    {
        for(int i=0; i<12; i++)
        {
        sum=sum+arr[i][n];
        }
        printf("%.1f\n", sum);
    }
    else if (T=='M')
    {
        for(int i=0; i<12; i++)
        {
        sum=sum+arr[i][n];
        }
        printf("%.1f\n", sum/12);
    }
return 0;
}
