#include <iostream>
#include <string> 
using namespace std;
int z, n;
bool flag = false;
int main()
{
    setlocale(LC_ALL, "rus");
    int z, n;
    bool rule = false;
    cout << "Введите число: ";
    
    cin >> n;
    
    cout << "Введите цифру для проверки: ";
   
    cin >> z;
    while (n > 0)
    {
        if ((n % 10) == z)
        {
            rule = true;
            n = n / 10;
        }
        else
        {
            n = n / 10;
        }

    }
    if (rule == true)
    {
        cout << "Цифра  входит в число ";
    }
    else
    {
        cout << "Цифра  не входит в число ";
    }
    return 0;
}