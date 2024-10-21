#include <stdio.h>

int main() {
    int a, b, c, sum;

    // Nhap hai so nguyên
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);

    printf("Nhap so thu hai: ");
    scanf("%d", &b);
        printf("Nhap so thu ba: ");
    scanf("%d", &c);

    // Thuc hien phép cong
    sum = a + b +c;

    // In ra ket qua
    printf("Tong cua %d và %d và %d là: %d\n", a, b, c, sum);

    return 0;
}

