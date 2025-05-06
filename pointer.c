#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;  // pointer to the first element of the array

    // Accessing array elements using the pointer
    // for(int i = 0; i < 5; i++) {
    //     printf("Element %d: %d\n", i, *(ptr + i));
    // }
    printf("%d", *(ptr+1));

    return 0;
}
