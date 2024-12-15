#include <stdio.h>
void mang(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d: %d\n", i, *(arr+i) );
    }
}

int main() {
    int array[] = {34,67,1,67,23,7};
    int size ; 
    size = sizeof(array) / sizeof(array[0]);
    mang(array, size);
    
    return 0;
}

