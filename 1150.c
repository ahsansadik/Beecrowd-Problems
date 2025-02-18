#include<stdio.h>
int main()
{
    int X, Z, count, sum=0;
    scanf("%d", &X);
    scanf("%d", &Z);
    while (Z<=X){
        scanf("%d", &Z);
    }
    for(int i=X; sum<=Z; i++){
        sum=sum+i;
        count++;
    }
    printf("%d\n", count);
    return 0;
}
