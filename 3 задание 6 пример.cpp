#include <bits/stdc++.h>
using namespace std;

int main() {
    double rate;
    
    cout << "Введите курс рубля за доллар: ";
    cin >> rate;
    
    cout << "\nUSD\tRUB\n";
    
    for (int dollars = 5; dollars <= 120; dollars += 5)
    {
        cout << dollars << "\t" << dollars * rate << endl;
    }
    return 0;
}
// запрашивает курс и выводит таблцу перевода