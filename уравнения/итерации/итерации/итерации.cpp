#include <iostream>
#include <clocale>
#include <cmath>
double F(double x) {
	return sqrt(1 - 0.4 * pow(x, 2)) - asin(x); //фуекция
}
double F1(double x) {
	return sin(sqrt(1 - 0.4 * pow(sin(asin(x)),2)));//итерационная функция
}
double Ft(double x) {
	return (-sqrt(5) * sin(2*x))/ 5* sqrt(5-2 * pow(sin(x),2)); // производнвя от итерационной функции
}
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	float a, b, x0, x1;
	float e = 1e-5;
	cout << "Введите границы интервала a, b: ";
	cin >> a >> b;
	if (abs(Ft(b)) < 1) {
		x0 = b;
		cout << "x0 =" << x0 << endl;
	}
	else {
		x0 = a;
		cout << "x0 = " << x0 << endl;
	}
	x1 = F1(x0);
	cout << " Первое приближение: " << (x1) << endl;
	while (fabs(x1 - x0) > e)
	{
		x0 = x1;
		x1 = F1(x0);
		cout << (x1) <<endl;
	}
	cout << "Решение уравнения  " << (x1);
	return 0;
}