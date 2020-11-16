

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus"); // Локализация на русский язык

    int n; // высота треугольника

    cout << "Введите высоту  равнобедренного треугольника: ";
    cin >> n; // Ввод параметров.

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - i; j++)
        {
            cout << ' ';
        }



        for (int j = n - 2 * i; j <= n; j++)
        {
            cout << '*';
        }


        cout << endl;
    }

    system("pause");
    return 0;
}
