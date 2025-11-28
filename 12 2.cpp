#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y;
    cout << "Введите x и y: ";
    cin >> x >> y;

    const double EPS = 1e-12;

    double denom = cos(12 * y - 4);

    (fabs(denom) < EPS)
        ? (cout << "Ошибка: cos(12y - 4) = 0 — деление невозможно." << endl, exit(0), 0)
        : 0;

    // Проверка sqrt(x)
    (x < 0)
        ? (cout << "Ошибка: подкоренное выражение x < 0." << endl, exit(0), 0)
        : 0;

    double result = (1 + sin(sqrt(x) + 1)) / denom;

    cout << "Результат = " << result << endl;
    return 0;
}