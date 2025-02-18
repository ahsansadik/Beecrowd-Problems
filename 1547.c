#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, QT, S, guess, winner, closest_diff, diff;

    scanf("%d", &N);
    while (N--) {
        scanf("%d %d", &QT, &S);
        closest_diff = 101;
        winner = -1;

        for (int i = 0; i < QT; i++) {
            scanf("%d", &guess);
            diff = abs(guess - S);

            if (guess == S) {
                winner = i + 1;
                break;
            } else if (diff < closest_diff) {
                closest_diff = diff;
                winner = i + 1;
            }
        }
        printf("%d\n", winner);
    }

return 0;
}
