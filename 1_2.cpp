

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    float s,a, b;
    cout << "Введите 2 числа: ";
    cin >> a;
    cin >> b;

    if (a != 0 && b != 0)
    {
        s = a / b;
        cout << "Результат: " << s;
    }
    else
    {
        if (a == 0)
        {
            cout << "Результат: 0";
        
        }
        else
        {
            if (b == 0)
                cout << "ОШИБКА! Делитель не может быть равен 0";
        }
    }
   
       
}

