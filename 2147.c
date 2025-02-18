#include <stdio.h>
#include <string.h>
int main()
{
    int t, n;
    scanf("%d", &t);
    char str[10001];
    for(int i=0; i<t; i++)
    {
        scanf("%s", str);
        printf("%.2f\n", 0.01*strlen(str));
    }
    return 0;
}
