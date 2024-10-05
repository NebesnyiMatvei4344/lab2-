#pragma once
#include <stdlib.h>
#include "index_first_zero.h"
#include "index_last_zero.h"

int sum_before_and_after(int asa[], int oso) {
    int index_first = index_first_zero(asa, oso);
    int index_last = index_last_zero(asa, oso);
    int summa = 0;
    for (int i = 0; i < oso; i++) {
        if (i<index_first || i>index_last) summa += abs(asa[i]);

    }
    return summa;
}