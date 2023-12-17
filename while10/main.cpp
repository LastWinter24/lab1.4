#include <iostream>
#include <cmath>
#include "Largest.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
    // Вводим целое число N
    int N;
    std::cout << "Введите целое число N (N > 1): ";
    std::cin >> N;

    if (N <= 1) {
        // Если введено некорректное число, выводим ошибку
        std::cerr << "Введено некорректное число. Пожалуйста, введите N > 1." << std::endl;
        return 1; // Возвращаем 1 как признак ошибки
    }

    // Вызываем функцию для поиска наибольшего K, удовлетворяющего условию
    int largestK = findLargestK(N);

    // Выводим результат
    std::cout << "Наибольшее целое число K, при котором 3^K < N, равно " << largestK << std::endl;

	
	return 0;
}



