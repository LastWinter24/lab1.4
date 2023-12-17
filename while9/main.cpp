#include <iostream>
#include <cmath>
#include "Smallest.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
    // Вводим целое число N
    int N;
    cout << "Введите целое число N (N > 1): ";
    cin >> N;

    if (N <= 1) {
        // Если введено некорректное число, выводим ошибку
        cerr << "Введено некорректное число. Пожалуйста, введите N > 1." << endl;
        return 1; // Возвращаем 1 как признак ошибки
    }

    // Вызываем функцию для поиска наименьшего K, удовлетворяющего условию
    int smallestK = findSmallestK(N);

    // Выводим результат
    cout << "Наименьшее целое число K, при котором 3^K > N, равно " << smallestK << endl;

	return 0;
}



