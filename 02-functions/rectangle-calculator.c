#include <stdio.h>


int area(int length, int width) {
    printf("%d\n", length * width);
}


int perimeter(int length, int width) {
    printf("%d\n", 2 * (length + width));
}


int main() {
    int length;
    int width;
    scanf("%d", &length);
    scanf("%d", &width);
    area(length, width);
    perimeter(length, width);
}