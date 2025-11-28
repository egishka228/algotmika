#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y;
    cout << "Введите x и y: ";
    cin >> x >> y;

    const double EPS = 1e-12;

    (x <= 0)
        ? (cout << "Ошибка: ln(x) определён только при x > 0." << endl, exit(0), 0)
        : 0;

    double denom = cos(x) - x / 3.0;

    (fabs(denom) < EPS)
        ? (cout << "Ошибка: знаменатель cos(x) - x/3 равен нулю." << endl, exit(0), 0)
        : 0;

    double result = x * log(x) + y / denom;

    cout << "Результат = " << result << endl;
    return 0;
}