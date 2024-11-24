#include <stdio.h>

int main() {
    int a, b, c;

    printf("Nhap vao so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap vao so thu hai: ");
    scanf("%d", &b);
    printf("Nhap vao so thu ba: ");
    scanf("%d", &c);

    if ((c > a && c < b) || (c > b && c < a)) {
        printf("So thu 3 nam trong khoang giua so thu nhat va so thu hai.\n");
    } else {
        printf("So thu 3 khong nam trong khoang giua so thu nhat va so thu hai.\n");
    }

    return 0;
}

