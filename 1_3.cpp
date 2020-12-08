

#include <iostream>
using namespace std;
int main()
{
    double n;
    setlocale(LC_ALL, "rus");
    cout << "Введите n= ";
    cin >> n;
    if (n < 5) 
    {
        n = n*3;
    }
       if (n>=5 && n<=7)
    {
        n=n/10;
    }
       if (n > 7)
    {
        n=n+3;
    }
    cout << "n = " << n << endl;
    return 0;

}

