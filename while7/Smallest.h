#include <iostream>

int findSmallestK(int N) {
    // ѕеременна€ дл€ хранени€ текущего значени€ K
    int K = 1;

    // ѕока квадрат K не превосходит N, увеличиваем K
    while (K * K <= N) {
        K++;
    }

    return K;
}