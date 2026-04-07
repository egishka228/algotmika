#include <iostream>
using namespace std;

int main() {
    char t;
    cin >> t;

    int speed[5] = {180, 30, 120, 900, 100}; // а, в, м, с, п

    int index = (t == 'в') * 1 +
                (t == 'м') * 2 +
                (t == 'с') * 3 +
                (t == 'п') * 4;

    cout << speed[index];

    return 0;
}