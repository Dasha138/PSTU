
#include <iostream>
#include<cmath>
using namespace std;
int main()

    {
        setlocale(LC_ALL, "rus");
        double n;
        int k;
        double a[100];
        double max = -1;
        cout << "Введите количество элементов массива: ";
        cin >> n;

        for (int i = 0; i < n; ++i)
        {
            a[i] = sin(n + (i / n));
        }
        cout << endl;
        cout << "Массив: ";
        for (int i = 0; i < n; ++i)
        {
            cout << a[i] << ' ';
        }
        cout << endl;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > max)
            {
                max = a[i];
                k = i;
            }
        }
        cout << "Максимальный элемент равен: " << max << endl;
        cout << "Номер элемента: " << k;
        return 0;
    }