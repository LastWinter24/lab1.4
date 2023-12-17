#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
    int N, K;
    cout << "Введите число N: ";
    cin >> N;
    cout << "Введите число K: ";
    cin >> K;

    int quotient = 0; // Частное от деления N на K
    int remainder = N; // Остаток от деления N на K

    while (remainder >= K) { // Пока остаток больше или равен K
        remainder -= K; // Вычитаем K из остатка
        quotient++; // Увеличиваем частное на 1
    }

    cout << "Частное от деления N на K: " << quotient << endl;
    cout << "Остаток от деления N на K: " << remainder << endl;

	
	return 0;
}



