#include <stdio.h>

int main() {
    int a, b, sum;

    // Nhap hai so nguy�n
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);

    printf("Nhap so thu hai: ");
    scanf("%d", &b);

    // Thuc hien ph�p cong
    sum = a + b;

    // In ra ket qua
    printf("Tong cua %d v� %d l�: %d\n", a, b, sum);

    return 0;
}

