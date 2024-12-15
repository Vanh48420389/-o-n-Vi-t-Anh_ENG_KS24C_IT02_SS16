#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 2345;
    int y = 6789;
    printf("Truoc khi doi cho:\n");
    printf("x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("Sau khi doi cho:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}

