#include <iostream>
#include "Exponent.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
    // Вводим целое число N
    int N;
    cout << "Введите целое число N (N > 0): ";
    cin >> N;

    if (N <= 0) {
        // Если введено некорректное число, выводим ошибку
        cerr << "Введено некорректное число. Пожалуйста, введите N > 0." << endl;
        return 1; // Возвращаем 1 как признак ошибки
    }

    // Вызываем функцию для поиска показателя степени и выводим результат
    int exponent = findExponentOfTwo(N);
    if (exponent != -1) {
        cout << "Показатель степени K для числа N = " << N << " равен " << exponent << endl;
    }

   
	
	return 0;
}



