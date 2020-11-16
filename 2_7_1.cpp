

#include <iostream>
#include <string>

using namespace std;



int main()
{
    setlocale(LC_ALL, "rus");
    int n;
    cout << "Введите сторону квадрата: ";
    cin >> n;
    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < n; ++j)
        {
             cout << '*';
             cout << ' ';
        }
        cout << '\n';
    }
    return 0;
}

