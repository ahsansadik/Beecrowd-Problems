#include<stdio.h>
int main()
{
    int t;
    printf("Input the number of test case ");
    scanf("%d", &t);

    for(int i = 0; i < t ; i++)
    {
        int x;
        scanf("%d", &x);

        for ( int j = 1 ; j <= x ; j++)
        {
            if(j%2!=0)
            {
              printf("%d\n", j);
            }
        }
    }
}
