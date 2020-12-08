
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    string s;
    cout << "Введите n: ";
    cin >> s;
    int m = s.size();
    for (int i = m - 1; i >= 0; i--)
        cout << s[i];
    return 0;
}
