#include <stdio.h>

int main() {
    int number;

    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("So %d la so chan.\n", number);
    } else {
        printf("So %d la so le.\n", number);
    }

    return 0;
}

