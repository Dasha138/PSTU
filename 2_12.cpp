
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int min=0 , max=0 , n;
    int a[100];
    cout << "Введите количество элементов массива: ";
    cin >> n;
    cout << "Введите элементы массива: ";
    for (int i = 1; i <=n; i++)
    {
        
       cin >> a[i];
    }
    cout << "Массив:\n";
    for (int i = 1; i <= n; i++)
    {
        cout<< a[i]<<' ';
    }
    min = a[n];
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    cout << "max=" << max << endl;
    cout << "min=" << min << endl;
    cout << "max+min=" << max + min << endl;
}


