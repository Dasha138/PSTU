#include <iostream>
#include <cmath>
using namespace std;
int a, n;
int main()
{
    cin >> a;
    n = sqrt(a);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
            cout << " ";
        }
        cout << "\n";
    }
    return 0;
}

