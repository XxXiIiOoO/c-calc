#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");
    int vibor;
    double a, b, res;
    bool vihod = false;

    while (!vihod) {
        cout << "Выберите операцию:" << endl;
        cout << "1. Сложить 2 числа" << endl;
        cout << "2. Вычесть первое из второго" << endl;
        cout << "3. Перемножить два числа" << endl;
        cout << "4. Разделить первое на второе" << endl;
        cout << "5. Возвести в степень N первое число" << endl;
        cout << "6. Найти квадратный корень из числа" << endl;
        cout << "7. Найти 1 процент от числа" << endl;
        cout << "8. Найти факториал из числа" << endl;
        cout << "9. Выйти из программы" << endl;

        cout << "Введите номер операции: ";
        cin >> vibor;

        switch (vibor) {
        case 1:
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            res = a + b;
            cout << "Результат: " << res << endl;
            break;
        case 2:
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            res = b - a;
            cout << "Результат: " << res << endl;
            break;
        case 3:
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            res = a * b;
            cout << "Результат: " << res << endl;
            break;
        case 4:
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            if (b == 0) {
                cout << "Ошибка: деление на ноль" << endl;
            }
            else {
                res = a / b;
                cout << "Результат: " << res << endl;
            }
            break;
        case 5:
            cout << "Введите число: ";
            cin >> a;
            cout << "Введите степень: ";
            int n;
            cin >> n;
            res = pow(a, n);
            cout << "Результат: " << res << endl;
            break;
        case 6:
            cout << "Введите число: ";
            cin >> a;
            res = sqrt(a);
            cout << "Результат: " << res << endl;
            break;
        case 7:
            cout << "Введите число: ";
            cin >> a;
            res = a / 100;
            cout << "Результат: " << res << endl;
            break;
        case 8:
            cout << "Введите число: ";
            cin >> n;
            res = 1;
            for (int i = 2; i <= n; i++) {
                res *= i;
            }
            cout << "Факториал числа " << n << " равен " << res << endl;
            break;
        case 9:
            vihod = true;
            cout << "Выход из программы" << endl;
            break;
        default:
            cout << "Ошибка: неверный номер операции" << endl;
            break;
        }
        cout << endl;
    }
    return 0;
}
