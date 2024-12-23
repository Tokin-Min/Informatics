#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;
double f(double x) {
	return sqrt(1 - 0.4 * pow(x, 2)) - asin(x);
}

double fn(double a, double b, double e) 
{ 
	double x = (a + b) / 2;
	if (abs(a - b) > e) {
		if (f(a) * f(x) < 0) return fn(a, x, e);
		else return fn(x, b, e);
	}
	else return x;
}

int main()
{
	setlocale(LC_ALL, "RU");
	float a, b, x;
	double e = 1e-5;
	cout << "Введите значение интервала [a;b]: ";
	cin >> a >> b;
	cout << " " << fn(a, b, e);

	return 0;
}
