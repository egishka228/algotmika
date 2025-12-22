//использование оператора иф для проверки условия неопределенности фунции
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
float x, y;
cout << "Введите x " << endl;
cin >> x;
if (x==0 || x < -1) //проверка условия неопреленности функции
cout << "Функция не определена"<< endl;
else
    {
    y = 1/x+sqrt(x+1);
    cout<< "x = " << x << "\t" << "y = " << y << endl;
    }
return 0;
}
