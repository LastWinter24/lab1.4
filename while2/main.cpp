#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int A, B;
    cout << "Введите значение A: ";
    cin >> A;
    cout << "Введите значение B: ";
    cin >> B;

    int count = 0;
    while (A >= B) {
        A -= B;
        count++;
    }

    cout << "Количество отрезков B на отрезке A: " << count << endl;


    return 0;
}



