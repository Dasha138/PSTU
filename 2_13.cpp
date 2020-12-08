

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int a, b, c;
    int d;
    double x1, x2;
    cout << "Введите переменные a,b,c= ";
    cin >> a;
    cin >> b;
    cin >> c;
    d = (b * b) - (4 * a * c);
    if (d < 0)
    {
        cout << "Корней нет!";
    }
    if(d>0)
    {
        x1 = (-b + sqrt(d)) / 2 * a;
        x2 = (-b - sqrt(d)) / 2 * a;
        cout << "Корни уравнения равны= " << x1 << ' ' << x2;
    }
    if (d == 0)
    {
        x1 = -b / 2 * a;
        cout << "Корень уравнения равен= " << x1;

    }
    return 0;
}
