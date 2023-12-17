#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
    int N;
    bool isPowerOfThree = true;
    // Ввод числа N
    cout << "Введите число: ";
    cin >> N;

    // Проверка на то, является ли число степенью числа 3
    while (N != 1) { // Цикл выполняется до тех пор, пока число не станет равным 1
        if (N % 3 != 0) { // Если число не делится на 3 без остатка
            isPowerOfThree = false;
            break;
        }
        N /= 3; // Делим число на 3
    }

    // Вывод результата
    if (isPowerOfThree) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
	
	return 0;
}



