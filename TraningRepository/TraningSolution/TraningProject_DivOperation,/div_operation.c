#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "russian");

    int a, b;
    float div;

    printf("Введите первое число: ");
    scanf_s("%d", &a);
    printf("Введите второе число: ");
    scanf_s("%d", &b);

    if (b == 0) {
        printf("На 0 делить нельзя!\n");
    }
    else {
        if (a == 0) {
            printf("Ответ: 0\n");
        }
        else {
            div = a / b;
            printf("Ответ: %.2f\n", div);
        }
    }
    system("pause");
    return 0;
}
