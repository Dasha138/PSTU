#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int n;
    int s = 0;
    cout << "Введите число элементов массива: ";
  
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if ((i % 3) == 0)
        {
            s = s - i;
        }
        else
        {
            s = s + i;
        }
    }
    cout << endl;
    cout << "Сумма элементов массива равна: "<<s;
  
    
    return 0;
}