#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");
    float v1, v2, v3, t1, t2, t3;
    printf("Введите значение v1: ");
    scanf("%f", &v1);
    printf("Введите значение t1: ");
    scanf("%f", &t1);
    printf("Введите значение v2: ");
    scanf("%f", &v2);
    printf("Введите значение t2: ");
    scanf("%f", &t2);
    printf("Введите значение v3: ");
    scanf("%f", &v3);
    printf("Введите значение t3: ");
    scanf("%f", &t3);
    float max_v = v1 + v2 + v3;
    printf("Итоговый объем: %f\n", max_v);
    float v_ib = (v1 * t1 + v2 * t2 + v3 * t3) / (v1 + v2 + v3);
    printf("Итоговая температура: %f\n", v_ib);
    return 0;
}