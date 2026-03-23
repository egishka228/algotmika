#include <bits/stdc++.h>
using namespace std;

int main() {
    const double POUND_TO_GRAMS = 453.0;
    
    cout << "Таблица перевода фунтов в грамм:\n";
    cout << "Фунты\tГраммы\n";
    
    for (int i = 1; i <= 10; i++)
    {
        cout << i << "\t" << i * POUND_TO_GRAMS << endl;
    }
    
    cout << "\n";
    
    double rate;
    cout << "Введите текущий курс (рублей за доллар):";
    cin >> rate;
    
    cout << "\nТаблица перевода долларов в рубли:\n";
    cout << "USD\tRUB\n";
    
    for (int dollars = 5; dollars <= 120; dollars += 5)
    {
        cout << dollars << "\t" << dollars * rate << endl;
    }
    return 0;
}