#include <stdio.h>
#include <math.h>

int main() {
    float a, b;
    printf("Введите значение альфы:");
    scanf("%f", &a);
    printf("Введите значение беты:");
    scanf("%f", &b);
    printf("По формуле №1: ");
    printf("%f",pow(cosf(a) - cosf(b), 2) - pow(sinf(a) - sinf(b), 2));
    printf("\nПо формуле №2: ");
    printf("%f",pow(-4*sinf((a-b)/2), 2) * cosf(a+b));
    return 0;
}
