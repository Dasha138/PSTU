#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, f;
	float x, s=0;
    setlocale(LC_ALL, "rus");
	cout << "Введите количество элементов последовательности: ";
	cin >> n;
	cout << "Введите x= ";
	cin >> x;
	for (int i = 0; i < n; i++)
	{
		if (i < 1) 
		{ 
			f = 1; 
	    }
		else 
		{ 
			f =f* i; 
		}
		s = s+pow(x, i) / f;
	}
	cout << endl;
	cout << s;
	return 0;
}