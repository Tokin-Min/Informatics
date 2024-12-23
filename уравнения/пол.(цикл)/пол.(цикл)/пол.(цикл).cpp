#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;
double f(double x) {
    return sqrt(1 - 0.4 * pow(x, 2)) - asin(x);
}

int main()
{
    setlocale(LC_ALL, "RU");
    float a, b, x0;
    float e = 1e-5;
    cout << "Введите значения границ интервала [a; b]:";
    cin >> a >> b;
    while (abs(a - b) > e)
    {
        x0 = (a + b) / 2;
        if (f(a) * f(x0) < 0)
        {
            b = x0;
            cout << b << endl;
        }
        else
        {
            a = x0;
            cout << a << endl;
        }
    }
    cout << "Решение уравнения х=:" << x0;
    return 0;
}