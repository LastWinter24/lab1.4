#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
    int N;
    bool isPrime = true;

    // Вводим целое число N
    cout << "Введите целое число N (> 1): ";
    cin >> N;

    // Проверяем все числа от 2 до N-1 на деление на N
    for (int i = 2; i < N; i++) {
        if (N % i == 0) {
            isPrime = false;  // Если есть делитель, то число не является простым и выходим из цикла
            break;
        }
    }

    // Выводим результат
    if (isPrime) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
	
	return 0;
}



