#include <stdio.h>

int main()
{
    int numbers[] = {10, 20, 30};
    int *ptr = numbers;

    printf("Before modification:\n");
    printf("%d %d %d\n", numbers[0], numbers[1], numbers[2]);

    *(ptr + 1) = 99;

    printf("After modification:\n");
    printf("%d %d %d\n", numbers[0], numbers[1], numbers[2]);

    return 0;
}
