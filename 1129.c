#include<stdio.h>
int main ()
{
    while(1)
    {
        int n;
        scanf("%d", &n);
        if(n==0)
        {
            return 0;
        }
        for(int i=0; i<n; i++)
        {
            int arr[5], black=0, position;
            for(int j=0; j<5; j++)
            {
                scanf("%d", &arr[j]);
            }
            for(int j=0; j<5 && black<2; j++)
            {
                if(arr[j]<=127)
                {
                    black++;
                    position=j+1;
                }
            }
            if(black==1)
            {
                if(position==1)
                    printf("A\n");
                else if(position==2)
                    printf("B\n");
                else if(position==3)
                    printf("C\n");
                else if(position==4)
                    printf("D\n");
                else if(position==5)
                    printf("E\n");
            }
            else
                printf("*\n");

        }
    }
}
