#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
    // Начальный вклад
    double initialDeposit = 1000.0;

    // Целевая сумма вклада
    double targetAmount = 1100.0;

    // Процентная ставка в месяц (0 < P < 25)
    double interestRate;
    cout << "Введите процентную ставку в месяц (0 < P < 25): ";
    cin >> interestRate;

    // Проверка на допустимость введенной процентной ставки
    if (interestRate <= 0 || interestRate >= 25) {
        cerr << "Недопустимая процентная ставка. Пожалуйста, введите значение в пределах 0 и 25." << endl;
        return 1; // Возвращаем 1 как признак ошибки
    }

    // Количество месяцев
    int months = 0;

    // Рассчитываем размер вклада до тех пор, пока он не превысит целевую сумму
    while (initialDeposit < targetAmount) {
        // Увеличиваем размер вклада на проценты
        initialDeposit += initialDeposit * (interestRate / 100);
        months++;
    }

    // Выводим результат
    cout << "Через " << months << " месяцев размер вклада превысит " << targetAmount << " рублей." << endl;
    cout << "Итоговый размер вклада: " << initialDeposit << " рублей." << endl;

    return 0;
}
	



