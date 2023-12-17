#include <iostream>
#include "Rem.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
    int A, B;
    cout << "Введите положительное число A: ";
    cin >> A;
    cout << "Введите положительное число B (B должно быть меньше A): ";
    cin >> B;

    int remainingLength = findRemainingLength(A, B);
    cout << "Длина незанятой части отрезка A: " << remainingLength << endl;
	
	return 0;
}



