#include<stdio.h>
int main()
{
    int a,b,max,min;
    scanf("%d %d", &a,&b);

    if(a>b){
        max=a;
        min=b;
    }
    else if(b>a){
        max=b;
        min=a;
    }

    if((max%min)==0)
        printf("Sao Multiplos\n");
    else
        printf("Nao sao Multiplos\n");

    return 0;
}
