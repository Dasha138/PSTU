
#include<iostream>
using namespace std;
int main()
{
    int n,s=0;
    setlocale(LC_ALL, "rus");
    cout << "Введите число: ";
    cin >> n;
    while(n>0)
    {
        
        s= s + (n % 10);
        n = n / 10;
    }
    
    cout << "Сумма цифр равна: " << s;
}

