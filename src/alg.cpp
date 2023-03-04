// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
    long double result = 1;
    for (int i = n; i > 0; i--) {
        result *= value;
    }
    return result;
}

uint64_t fact(uint16_t n) {
    uint64_t result = 1;
    while (n > 0) {
        result *= n;
        n--;
    }
    return result;
}

double calcItem(double x, uint16_t n) {
    return pown(x, n) / (double)fact(n);
}

double expn(double x, uint16_t count) {
    double result = 1;
    while (count > 0) {
        result += pown(x, count) / (double)fact(count);
        count--;
    }
    return result;
}

double sinn(double x, uint16_t count) {
    double result = x;
    while (count > 1) {
        result += pown(-1, count - 1) * ((pown(x, 2 * count - 1)) / fact(2 * count - 1));
        count--;
    }
    return result;
}

double cosn(double x, uint16_t count) {
    double result = 1;
    while (count > 1) {
        result += pown(-1, count - 1) * ((pown(x, 2 * count - 2)) / fact(2 * count - 2));
        count--;
    }
    return result;
}
