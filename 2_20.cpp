#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float z,n,b;
	bool  rule = false;
	cout << "Введите n: ";
	cin >> n;
	cout << "Введите z: ";
	cin >> z;
	for (int i = 0; i < n; i++)
	{
		if (n > 0)
		{
			b = sin(n + i / n);
			cout << b << " ";
			if (b == z)
			{
				rule = true;
				break;
			}
		}
	}
	if (rule)
	{
		cout << "Да";
	}
	else 
	{
		cout << "Нет";
	}
	
}

