#pragma once
#include <iostream>

int findRemainingLength(int A, int B) {
    int numOfSegments = A / B; // ���������� ���������� �������� ����� B, ������� ���������� �� ������� A
    int remainingLength = A - (numOfSegments * B); // ��������� ����� ��������� ����� ������� A

    return remainingLength;
}