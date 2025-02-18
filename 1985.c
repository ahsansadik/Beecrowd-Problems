#include<stdio.h>
int main()
{
int n, x, y;
float sum, f=0;
scanf("%d", &n);

    for (int i =0; i<n; i++)
    {
        scanf("%d %d", &x, &y);

        if(x==1001){
            sum=1.50*y;
        }

        else if(x==1002){
            sum=2.50*y;
        }
        else if(x==1003){
            sum=3.50*y;
        }
        else if(x==1004){
            sum=4.50*y;
        }
        else if(x==1005){
            sum=5.50*y;
        }
        f=f+sum;

    }
    printf("%.2f\n", f);
}
