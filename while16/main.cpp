#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
    // Пробег в первый день
    double initialDistance = 10.0;

    // Целевой суммарный пробег
    double targetDistance = 200.0;

    // Процентное увеличение пробега в день (0 < P < 50)
    double increasePercentage;
    cout << "Введите процентное увеличение пробега в день (0 < P < 50): ";
    cin >> increasePercentage;

    // Проверка на допустимость введенного процентного увеличения
    if (increasePercentage <= 0 || increasePercentage >= 50) {
        cerr << "Недопустимое процентное увеличение. Пожалуйста, введите значение в пределах 0 и 50." << endl;
        return 1; // Возвращаем 1 как признак ошибки
    }

    // Количество дней
    int days = 1; // Уже прошел первый день

    // Суммарный пробег
    double totalDistance = initialDistance;

    // Рассчитываем суммарный пробег до тех пор, пока он не превысит целевую дистанцию
    while (totalDistance <= targetDistance) {
        // Увеличиваем пробег на заданный процент от предыдущего дня
        initialDistance += (initialDistance * increasePercentage) / 100;
        totalDistance += initialDistance;
        days++;
    }

    // Выводим результат
    cout << "Через " << days << " дней суммарный пробег превысит " << targetDistance << " км." << endl;
    cout << "Суммарный пробег: " << totalDistance << " км." << endl;

	
	return 0;
}



