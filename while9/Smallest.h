#pragma once
#include <iostream>
#include <cmath>

int findSmallestK(int N) {
    // ѕеременна€ дл€ хранени€ текущего значени€ K
    int K = 0;

    // ѕока 3^K не превосходит N, увеличиваем K
    while (std::pow(3, K) <= N) {
        K++;
    }

    return K;
}