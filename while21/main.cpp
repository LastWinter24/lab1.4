#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
    int N;
    bool hasOddDigit = false;

    // Вводим целое число N
    cout << "Введите целое число N: ";
    cin >> N;

    // Проверяем каждую цифру числа N на четность с помощью операции взятия остатка от деления на 2
    while (N > 0) {
        int digit = N % 10;  // Получаем последнюю цифру числа
        if (digit % 2 != 0) {
            hasOddDigit = true;  // Если цифра нечетная, устанавливаем флаг на true и выходим из цикла
            break;
        }
        N = N / 10;  // Убираем последнюю цифру числа
    }

    // Выводим результат
    if (hasOddDigit) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
	
	return 0;
}



