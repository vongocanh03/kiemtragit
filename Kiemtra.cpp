#include <stdio.h>

int main() {
    int a, b, sum;

    // Nhap hai so nguyên
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);

    printf("Nhap so thu hai: ");
    scanf("%d", &b);

    // Thuc hien phép cong
    sum = a + b;

    // In ra ket qua
    printf("Tong cua %d và %d là: %d\n", a, b, sum);

    return 0;
}

