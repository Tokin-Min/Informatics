#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;
double F(double x){
	return sqrt(1 - 0.4 * pow(x, 2)) - asin(x);
}

double F1(double x) {
	return (-2 * x / sqrt(25 - 10 * pow(x, 2))) - (1 / sqrt(1 - pow(x, 2)));
}

double F2(double x) {
	return (-1 / sqrt(25 - 10 * pow(x, 2)) * (5 - 2 * pow(x, 2))) - (x / (sqrt(1 - pow(x, 2))) * (1 - pow(x, 2)));
}


int main() {
	setlocale(LC_ALL, "RU");
	float a, b, k, x0, x1;
	float e = 0.001;
	cout << "Введите границы интервала а и b: ";
	cin >> a >> b;
	k = F(a) * F2(a);
	if (k > 0)
	{
		x0 = a;
		cout << "Первый приближенный корень х0= " << x0 << endl;
	}
	else
	{
		x0 = b;
		cout << "Первый приближенный корень х0 = " << x0 << endl;
	}
	x1 = x0 - F(x0) / F1(x0);
	while (abs(x1 - x0) > e)
	{
		x0 = x1;
		x1 = x0 - F(x0) / F1(x0);
		cout << x1<< endl;
	}
	cout << "Решение уравнения  " << x1;
	return 0;
}