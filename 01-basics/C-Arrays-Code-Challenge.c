#include <stdio.h>

int main() {
    int numbers[5];
    for (int i = 0; i <= 4; i++) {
        if (i == 0) {
            numbers[i] = 10;
        } else if (i == 4) {
            numbers[i] = 50;
        }
    }

    printf("%d\n", numbers[0]);
    printf("%d", numbers[4]);

    return 0;
} 