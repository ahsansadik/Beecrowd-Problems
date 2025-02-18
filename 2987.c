#include <stdio.h>

int main() {
    char L;
    int position;

    scanf("%c", &L);

    if (L >= 'A' && L <= 'Z') {
        position = L - 'A' + 1;
    }

    printf("%d\n", position);

    return 0;
}
