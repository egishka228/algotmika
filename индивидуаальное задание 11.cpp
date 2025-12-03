#include <iostream>
using namespace std;

int f (int x) 
{
    return (x % 5 == 0) ? x / 5 : x + 1;
}
int main()
{
    int x;
    cout << "Введите число x: ";
    cin >> x;
    
    cout << "f(x) = " << f(x) << endl;
    return 0;
}