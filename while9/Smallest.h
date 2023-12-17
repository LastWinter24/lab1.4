#pragma once
#include <iostream>
#include <cmath>

int findSmallestK(int N) {
    // ���������� ��� �������� �������� �������� K
    int K = 0;

    // ���� 3^K �� ����������� N, ����������� K
    while (std::pow(3, K) <= N) {
        K++;
    }

    return K;
}