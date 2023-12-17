#pragma once
#include <iostream>
#include <cmath>

int findLargestK(int N) {
    // ���������� ��� �������� �������� �������� K
    int K = 0;

    // ���� 3^K �� ����������� N, ����������� K
    while (std::pow(3, K) < N) {
        K++;
    }

    // ��������� K �� 1, ��� ��� ������ 3^(K-1) < N, �� 3^K >= N
    K--;

    return K;
}