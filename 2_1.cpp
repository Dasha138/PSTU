
#include <iostream>
using namespace std;
int main()
{
    int n;
    int i;
    int sum = 0;
    setlocale(LC_ALL, "rus");
    cout << "Введите n = ";
    cin >> n;

     for(i=0; i<=n; i++)
    {
         sum = sum + i;
    }
    cout << "Сумма = " << sum << endl;

    return 0;
}
