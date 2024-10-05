#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "index_last_zero.h"
#include "index_first_zero.h"
#include "sum_between.h"
#include "sum_before_and_after.h"

int main() {
    int asa[100];
    int oso = 0, mode = 0;
    char c;
    scanf("%d%c", &mode, &c);
    do
    {
        scanf("%d%c", &asa[oso++], &c);
    } while (c != '\n');
    switch (mode)
    {
    case 0:
        printf("%d\n", index_first_zero(asa, oso));
        break;
    case 1:
        printf("%d\n", index_last_zero(asa, oso));
        break;
    case 2:
        printf("%d\n", sum_between(asa, oso));
        break;
    case 3:
        printf("%d\n", sum_before_and_after(asa, oso));
        break;
    default:
        puts("Данные некорректны");
    }
    return 0;
}