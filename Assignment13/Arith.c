#include <stdio.h>
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;
    printf("Initial pointer: %p\n", (void *)p);
    printf("\nAfter p++:\n");
    p++;
    printf("Pointer value: %p\n", (void *)p);
    printf("\nAfter p--:\n");
    p--;
    printf("Pointer value: %p\n", (void *)p);
    printf("\nAfter p + 2:\n");
    printf("Pointer value: %p\n", (void *)(p + 2));
    printf("\nAfter p - 1:\n");
    printf("Pointer value: %p\n", (void *)(p - 1));
    return 0;
}
