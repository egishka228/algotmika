#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    double x, y;
    cout << "Введите x и y:" << endl;
    cin >> x >> y;
    
    double result = 1 + sin(sqrt(x) + 1) / cos(12 * y - 4);
    
    cout << "Результат = " << result << endl;
    
    return 0;
}
