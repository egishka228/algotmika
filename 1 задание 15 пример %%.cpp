#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    int r2 = x * x + y * y;

    int border = (r2 == 100) + (x == 0) + (y + x == 0);
    int inside = (r2 < 100) * (x > 0) * (y > -x);

    string result[3] = {"Нет", "Да", "На границе"};

    cout << result[ border > 0 ? 2 : inside ];

    return 0;
}