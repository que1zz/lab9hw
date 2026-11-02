#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int r()
{
    int r;

    printf("Введите радиус вписанной окружности r (целое число > 0): ");
    while (scanf("%d", &r) != 1 || r <= 0)
    {
        while (getchar() != '\n');
    }
    return r;
}

int main()
{
    setlocale(LC_ALL, "RUS");

    char symbol;
    int R, x, y;

    printf("Введите символ для рисования: ");
    scanf(" %c", &symbol);

    R = (int)round(r() * sqrt(2.0));    

    printf("\n");
    for (y = -R; y <= R; y++)
    {
        for (x = -R; x <= R; x++)
        {
            if (abs(x) + abs(y) <= R)
                printf("%c ", symbol);
            else
                printf("  ");
        }
        printf("\n");
    }

    system("pause");
    return 0;
}