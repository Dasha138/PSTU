#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int n;
    int l;
    int a[100];
    bool rule;
    cout << "Введите количество элементов: ";
    
    cin >> n;
    cout << "Введите последовательность: ";
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        
    }
    cout << "Последовательность: \n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i]<<' ';

    }
    cout << endl;
    if (a[0] == 0)
    {
        rule = false;
    }
    if (a[0] > 0)
    {
        cout << "Последовательность положительная";
        rule = true;

    }
    if (a[0] < 0)
    {
        cout << "Последовательность отрицательная";
        rule = true;

    }
    if (rule == false)
    {
        cout << "Последовательность нулевая";
    }
    return 0;
}