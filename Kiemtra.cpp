#include <stdio.h>

int main() {
    int a, b, c,d, sum;

    // Nhap hai so nguy�n
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);

    printf("Nhap so thu hai: ");
    scanf("%d", &b);
    printf("Nhap so thu ba: ");
    scanf("%d", &c);
    printf("Nhap so thu nhat: ");
    scanf("%d", &d);

    // Thuc hien ph�p cong
    sum = a + b -c;
	
    // In ra ket qua
    printf("Tong cua %d v� %d v� %d va %d l�: %d\n", a, b, c, d, sum);

    return 0;
}

