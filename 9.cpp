#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    double x;
    cout << "Введите x: ";
    cin >> x;
    double denom = x * (x*x - 15.0);
    const double EPS = 1e-12;
    if (fabs(denom) < EPS)
    {
        cout << "Ошибка: знаменатель равен нулю (x = 0)." << endl;
        return 0;
    }
    double term1 = fabs(x*x*x - x*x);
    double term2 = fabs(7.0 *x) / denom;
    double result = term1 - term2;
    
    cout << "Результат = " << result << endl;
    return 0;
}