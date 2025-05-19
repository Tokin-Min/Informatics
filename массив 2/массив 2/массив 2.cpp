#include <iostream>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	const int s= 3;
	const int n = 4;
	int a[n][n];
	cout << "ВВедите значения матрицы: " << endl;
	for (int i = 0; i < s; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}	
	}
	cout << endl;

	for (int i = 0; i < s; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	for (int k = 0; k < n - 1; k++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (a[1][j] > a[1][j + 1])
			{
				for (int i = 0; i < s; i++)
				{
						swap(a[i][j], a[i][j + 1]);
						for (int i = 0; i < s; i++)
						{
							for (int j = 0; j < n; j++)
							{
								cout << a[i][j] << " ";
							}
							cout << endl;
						}
						cout << endl;
				}
			}
		}
	}

	for (int i = 0; i < s; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}