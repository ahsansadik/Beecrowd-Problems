#include<stdio.h>
int main()
{
    int n, a, b;

    do{
    int p1=0, p2=0;
    scanf("%d", &n);
    while(n<0 || n>10){
    scanf("%d", &n);
    }
    if(n==0){
        return 0;
    }
    for(int i=0; i<n; i++){
        scanf("%d %d", &a, &b);

        if(a>b)
            p1++;
        else if(b>a)
            p2++;
    }
    printf("%d %d\n", p1, p2);
    } while (1);
}
