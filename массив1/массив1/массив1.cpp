#include <iostream>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	int tmp;
	const int n = 3;
	int a[n][n];
	cout << "введите значение матрици: " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}
	

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			tmp = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = tmp;
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					cout << a[i][j] << ' ';
				}
				cout << endl;
			}
			cout << endl;
		}
	}
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}