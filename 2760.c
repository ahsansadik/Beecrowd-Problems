#include <stdio.h>
#include <string.h>
int main()
{
    char str1[101], str2[101], str3[101];

    gets(str1);
    gets(str2);
    gets(str3);

    printf("%s%s%s\n", str1, str2, str3);
    printf("%s%s%s\n", str2, str3, str1);
    printf("%s%s%s\n", str3, str1, str2);
    printf("%.10s%.10s%.10s\n", str1, str2, str3);

    return 0;
}
