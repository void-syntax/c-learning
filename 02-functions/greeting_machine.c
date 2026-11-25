#include <stdio.h>

void greeting() {
    printf("Welcome\n");
}

int square(int n) {
    int square = n * n;
    return 0;
}

int main(int n) {

    for (int i = 1; i <= 3; i++) {
        greeting();
    }

    int result = square(5);
    printf("Square of 5 is %d\n", result);

    printf("Square of 9 is %d\n", square(9));

    return 0;

}