#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int h = n / 2;
    for (int i = 1; i <= n + h; i++)
    {
        for (int j = 1; j <= 2 * n + h; j++)
        {
            if ((i == 1 && (j - h) % 2 == 1 && j >= h) ||
                (i - h + j == 2) ||
                (i - h + j == 2 * n && i <= h) ||
                (j == 2 * n + h - 1 && i <= n) ||
                (j == 1 && i > h) ||
                (i == h + 1 && j < 2 * n && j % 2 == 1) ||
                (i == h + n && j <= 2 * n && j % 2 == 1) ||
                (j == 2 * n - 1 && i > h) ||
                (i - h + j == 3 * n - 1 && i >= n))
            {
                cout << '*';
            }
            else
            {
                cout << ' ';
            }
        }
        cout << '\n';
    }
}

