#include <iostream>
#include "Fibonacchi.h"
using namespace std;


int main() {
	setlocale(LC_ALL, "RU");
	int num;
	cout << "Введите число: ";
	cin >> num;
	int nextFib = findNextFibonacci(num);
	cout << "Первое число Фибоначчи, большее, чем " << num << " является: " << nextFib << endl;
	return 0;
}



