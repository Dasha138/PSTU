#include <iostream>
#include <cmath>
using namespace std;
int main()
{

     int n;
     int m; 

	setlocale(LC_ALL, "RUS");
	cin >> n;
	m = sqrt(n);
	if (n != m * m)
		cout << "Невозможно построить квадрат из N звездочек";
	else
	{
		for (int i = 1; i <= m; i++)
		{
			for (int i = 1; i <= m; i++)
			{
				cout << "* ";
			}
			cout << endl;
		}
	}
	return 0;
}
