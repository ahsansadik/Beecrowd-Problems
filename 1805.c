#include<stdio.h>
int main()
{
	long long int x,y;
    scanf("%lld %lld",&x,&y);
    long long int sum = ((x+y)*(y-x+1))/2;

    printf("%lld\n",sum);

}
