#include <stdio.h>
#include <string.h>

int main() {
    char num[101];
    scanf("%s", num);
    strrev(num);
    printf("%s\n", num);
    return 0;
}
