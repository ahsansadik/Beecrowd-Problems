#include<stdio.h>
int main()
{
    int n,r;

    while(scanf("%d %d", &n, &r) !=EOF)
    {
        int arr[r], m=0;

        for(int i=0; i<r; i++)
        {
            scanf("%d", &arr[i]);
        }
        for(int i=1; i<=n; i++)
        {
            int count=0;
            for(int j=0; j<r; j++)
            {
                if (i!=arr[j])
                    count++;
            }
            if(count==r)
                printf("%d ", i);
            else
                m++;
        }
            if(m==n)
                printf("*");
            printf("\n");
    }
return 0;
}
