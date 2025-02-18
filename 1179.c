#include<stdio.h>
int main()
{
    int x, par[5], impar[5];
    int switch1=0, switch2=0;
    for(int i=0; i<15; i++)
    {
        scanf("%d", &x);
        if(x%2==0 && switch1!=5)
        {
            par[switch1]=x;
            switch1++;
        }
        else if(x%2!=0 && switch2!=5)
        {
            impar[switch2]=x;
            switch2++;
        }
        if(switch1==5)
        {
            for(int j=0; j<5; j++)
            {
                printf("par[%d] = %d\n", j, par[j]);
            }
            switch1=0;
        }
        if(switch2==5)
        {
            for(int j=0; j<5; j++)
            {
                printf("impar[%d] = %d\n", j, impar[j]);
            }
            switch2=0;
        }
    }
    for(int j=0; j<switch2; j++)
        {
            printf("impar[%d] = %d\n", j, impar[j]);
        }
    for(int j=0; j<switch1; j++)
        {
            printf("par[%d] = %d\n", j, par[j]);
        }
return 0;
}
