#include <stdio.h>
#include <string.h>
int main()
{
    int mark;
    char str[101];
    gets(str);

    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]==',')
        {
            printf("\n");
        }
        else
        {
            printf("%c", str[i]);
        }
    }
    printf("\n");
    return 0;
}

