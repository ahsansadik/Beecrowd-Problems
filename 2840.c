#include<stdio.h>
#include<math.h>
int main()
{
    int r,totalgas,area,ans;
    scanf("%d %d",&r,&totalgas);

    area = 4/(float)3*3.1415*r*r*r;
    ans = (totalgas/area);
    printf("%d\n",ans);

return 0;
}
