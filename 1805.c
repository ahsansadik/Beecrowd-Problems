#include<stdio.h>

main()
{
	long long int sum,x,y;
		scanf("%lld %lld",&x,&y);
		sum=((x+y)*(y-x+1))/2;
		printf("%lld\n",sum);
}
