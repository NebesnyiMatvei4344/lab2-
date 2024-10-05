#include <stdlib.h>
#include "index_first_zero.h"
#include "index_last_zero.h"

int sum_between(int asa[], int oso) {
    int index_first = index_first_zero(asa, oso);
    int index_last = index_last_zero(asa, oso);
    int summa = 0;
    while (index_first < index_last) {
        summa += abs(asa[index_first++]);
    }
    return summa;
}