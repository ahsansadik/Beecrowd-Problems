#include <stdio.h>
#include <string.h>
int main()
{
    int t, n;
    scanf("%d", &t);
    char str[20];
    for(int i=0; i<t; i++)
    {
        scanf("%s %d", str, &n);

        if(strcmp(str,"Thor") == 0)
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }
    return 0;
}
