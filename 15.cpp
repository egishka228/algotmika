#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    double x, y;
    cout << "Введите x и y: ";
    cin >> x >> y;
    
    const double EPS = 1e-12;
    
    if (x <= 0.0)
    {
        cout << "Ошибка: ln(x) определен только при x > 0." << endl;
        return 0;
    }
    double denom = cos(x) - x / 3.0;
    if (fabs(denom) < EPS)
    {
        cout << "Ошибка: знаменатель cos(x) - x/3 равен нулю." << endl;
        return 0;
    }
    
    double result = x * log(x) + y / denom;
    cout << "Результат = " << result << endl;
    return 0;
}
    