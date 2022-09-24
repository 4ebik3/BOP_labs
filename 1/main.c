#include <stdio.h>

int main() {
    char str[80];
    int number;
    printf("Введите строку:\n");
    fgets(str, 100, stdin);
    printf("Вот ваша строка:");
    puts(str);
    printf("Введите целое число:\n");
    scanf("%d", &number);
    printf("Вот ваше число: %d", number);


    return 0;
}
