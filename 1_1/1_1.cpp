

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int a, b, c;
    cout << "Введите 3 числа: ";
    cin >> a;
    cin >> b;
    cin >> c;
    if (a > b && a > c)
    {
        cout << "Максимальное число: " << a;

    }
    else
    {
        if (b > a&& b > c)
        {
            cout << "Максимальное число: " << b;
        }
        else
        {
            cout << "Максимальное число: " << c;
        }

    }
}
