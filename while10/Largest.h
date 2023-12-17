#pragma once
#include <iostream>
#include <cmath>

int findLargestK(int N) {
    // Переменная для хранения текущего значения K
    int K = 0;

    // Пока 3^K не превосходит N, увеличиваем K
    while (std::pow(3, K) < N) {
        K++;
    }

    // Уменьшаем K на 1, так как теперь 3^(K-1) < N, но 3^K >= N
    K--;

    return K;
}