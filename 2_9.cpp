#include <iostream>
using namespace std;
int main()

{
	setlocale(LC_ALL, "RUS");
	int n,s;
	cout << "Введите длину ребра: ";
	cin >> n;
	
	s = (n + 1) / 2;
	if (n <= 4)
	{
		cout << "Ошибка!";
	}
	else
	{
		for (int i = 1; i < s; i++)
		{
			cout << " ";
		}
		for (int i = 1; i <= n; i++)
		{
			cout << "* ";
		}
		cout << endl;
		for (int i = 1; i <= s - 2; i++)
		{
			for (int j = 1; j <= (s - i - 1); j++)
			{
				cout << " ";
			}
			cout << "*";
			for (int j = 1; j <= n - 2; j++)
			{
				cout << "  ";
			}
			cout << " " << "*";
			for (int j = 1; j < i; j++)
			{
				cout << " ";
			}
			cout << "*";
			cout << endl;
		}
		for (int i = 1; i <= n; i++)
		{
			cout << "* ";
		}
		for (int i = 1; i < s - 2; i++)
		{
			cout << " ";
		}
		cout << "*" << endl;
		for (int i = 1; i <= n - s; i++)
		{
			cout << "*";
			for (int j = 1; j <= 2 * n - 3; j++)
			{
				cout << " ";
			}
			cout << "*";
			for (int j = 1; j <= s - 2; j++)
			{
				cout << " ";
			}
			cout << "*" << endl;
		}
		for (int i = 1; i <= s - 2; i++)
		{
			cout << "*";
			for (int j = 1; j <= 2 * n - 3; j++)
			{
				cout << " ";
			}
			cout << "*";
			for (int j = 1; j <= s - i - 2; j++)
			{
				cout << " ";
			}
			cout << "*" << endl;
		}
		for (int i = 1; i <= n; i++)
		{
			cout << "* ";
		}
	}
	return 0;
}