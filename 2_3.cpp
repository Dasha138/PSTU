

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    cout << "Введите количество слагаемых: ";
    int s, n, p;
    s = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        p = 1;
        for (int j = i; j <= i * 2; j++)
        {
            p *= j;

        }
        s += p;
    }
    cout << s;
   
}
