#pragma once
#include <iostream>

bool isFibonacci(int n) {
    int a = 1, b = 1, c;
    while (a < n) {
        c = a + b;
        a = b;
        b = c;
    }
    if (a == n) {
        return true;
    }
    else {
        return false;
    }
}
int findNextFibonacci(int n) {
    int a = 1, b = 1, c;
    while (a <= n) {
        c = a + b;
        a = b;
        b = c;
    }
    return a;
}