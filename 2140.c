#include<stdio.h>
int main()
{
    int x, y;

    while(1)
    {
        scanf("%d %d", &x, &y);
        if(x==0 && y==0)
        {
            return 0;
        }

        int rem=y-x,  count=0;

        if(rem>=100 && count<3){
            rem=rem-100;
            count++;
        }
        if(rem>=50 && count<3){
            rem=rem-50;
            count++;
        }

        if(rem>=20 && count<3){
            rem=rem-20;
            count++;
        }

        if(rem>=10 && count<3){
            rem=rem-10;
            count++;
        }
        if(rem>=5 && count<3){
            rem=rem-5;
            count++;
        }

        if(rem>=2 && count<3){
            rem=rem-2;
            count++;
        }

    if (rem==0 && count==2)
    printf("possible\n");
    else
    printf("impossible\n");

    }
}
