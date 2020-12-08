

#include <iostream>
using namespace std;
int main()
{
    int n;
    int i;
    int p = 1;
    setlocale(LC_ALL, "rus");
    cout << "Введите n = ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        p = p*i;
    }
    cout << "Произведение = " << p << endl;
    return 0;
}
