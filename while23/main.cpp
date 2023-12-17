﻿#include <iostream>

using namespace std;


// Функция для вычисления наибольшего общего делителя (НОД) двух чисел с помощью алгоритма Евклида
int gcd(int a, int b) {
    // Если второе число равно 0, то возвращаем первое как НОД
    if (b == 0) {
        return a;
    }
    // Иначе рекурсивно вызываем функцию с аргументами b и a mod b
    return gcd(b, a % b);
}

int main() {
	setlocale(LC_ALL, "RU");
    int A, B;

    // Вводим два целых положительных числа A и B
    cout << "Введите два целых положительных числа A и B: ";
    cin >> A >> B;

    // Вызываем функцию для вычисления НОД и выводим результат
    cout << "Наибольший общий делитель (НОД) чисел " << A << " и " << B << " равен " << gcd(A, B) << endl;

	
	return 0;
}


