#include <iostream>
#include <clocale>
using namespace std;

const int n = 8;
int board[n][n];


// установка ферзя
void putQueen(int i, int j)
{
	for (int x = 0; x < n; x++)
	{
		++board[x][j]; // вертикаль
		++board[i][x]; // горезанталь
		 
		int diagonal1 = j - i + x;
		if (diagonal1 >= 0 && diagonal1 < n)
			++board[x][diagonal1];

		int diagonal2 = j + i - x;
		if (diagonal2 >= 0 && diagonal2 < n)
			++board[x][diagonal2];
	}
	board[i][j] = -1;
}

// удаление ферзя
void removeQueen(int i, int j)
{
	for (int x = 0; x < n; x++)
	{
		--board[x][j]; // вертикаль
		--board[i][x]; //горезанталь

		int diagonal1 = j - i + x;
		if (diagonal1 >= 0 && diagonal1 < n)
			--board[x][diagonal1];

		int diagonal2 = j + i - x;
		if (diagonal2 >= 0 && diagonal2 < n)
			--board[x][diagonal2];
	}
	board[i][j] = 0;
}
//проверка можноли поставить в клетке ферзя
bool Queen(int i)
{
	if (i == n)
	{
		return true;
	}
	for (int j = 0; j < n; j++)
	{
		if (board[i][j] == 0)
		{
			putQueen(i, j);
			//вывод шагов
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if (board[i][j] == -1) cout << " Ф ";
					else
					{
						cout << " . ";
					}
				}
				cout << endl;
			}
			cout << endl << "-----------------------" << endl;
			if (Queen(i+1))
			{
				return true;
			}
			else
				removeQueen(i, j);
		}
	}
	return false;	
}

int main()
{
	setlocale(LC_ALL, "RU");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			board[i][j] = 0;
		}

	}
	
	if (Queen(0))
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (board[i][j] == -1) cout << " Ф ";
				else
				{
					cout << " . ";
				}
			}
			cout << endl;
		}
	}
	else cout << "Error";

	return 0;
}