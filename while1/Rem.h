#pragma once
#include <iostream>

int findRemainingLength(int A, int B) {
    int numOfSegments = A / B; // определяем количество отрезков длины B, которое помещается на отрезке A
    int remainingLength = A - (numOfSegments * B); // вычисляем длину незанятой части отрезка A

    return remainingLength;
}