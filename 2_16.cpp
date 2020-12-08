#include <iostream>
using namespace std;
int n;
int sum;
int main()
{
    setlocale(LC_ALL, "rus");
    int n;
    int s=0;
    
    cout << "Введите количество элементов массива: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if ((i % 2) == 0)
        {
            s = s + i;
        }
        else
        {
            s = s - i;
        }
    }
    cout << endl;
    cout << "Сумма элементов последовательности равна: "<<s;
    
    
    return 0;
}