#include <iostream>

int findSmallestK(int N) {
    // ���������� ��� �������� �������� �������� K
    int K = 1;

    // ���� ������� K �� ����������� N, ����������� K
    while (K * K <= N) {
        K++;
    }

    return K;
}