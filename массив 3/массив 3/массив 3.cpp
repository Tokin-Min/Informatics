#include <iostream>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	const int n = 5;
	int a[n];
	int c[n];
	int b[n];
	cout << "Пузыpковый метод: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int k = 0; k < n-1; k++)
	{
		for (int i = 0; i < n-k-1; i++)
		{
			if (a[i] > a[i + 1])
			{
				int tmpa = a[i]; a[i] = a[i + 1]; a[i + 1] = tmpa;
				for (int i = 0; i < n; i++)
				{
					cout << a[i] << " ";
				}
				cout << endl;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	cout << "Метод вставки: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> c[i];
	}
	for (int i = 1; i < n; i++)
	{
		int j = i - 1;
		while (j >= 0 && c[j] > c[j + 1])
		{
			swap(c[j], c[j + 1]);
			for (int i = 0; i < n; i++)
			{
				cout << c[i] << " ";
			}
			cout << endl;
			j--;
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << c[i] << " ";
	}
	cout << endl;


	cout << "Метод Выбора: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >>b[i];
	}
	int min;
	for (int i = 0; i < n; i++)
	{
		min = b[i];
		for (int j = i+1; j < n; j++)
		{
			if (min > b[j])
			{
				min = b[j];
				int tmpb = b[i]; b[i] = min; b[j] = tmpb;
				for (int i = 0; i < n; i++)
				{
					cout << b[i] << " ";
				}
				cout << endl;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << b[i] << " ";
	}





	return 0;
}

