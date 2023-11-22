/*
Nайти область допустимых значений функции и написать программу, вычисляющую значение функции для заданных 
начальных данных (s, t - целые, x - вещественное), обеспечив варианты: ввода данных с клавиатуры, 
инициализации данных в программе, вывода результата на экран. 
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double y, x, t, s;
	cout << "x t s"<<endl;
	cin >> x >> t >> s;
	if (x == 1 || t == 0 || pow(x, s) <= -1)
		cout << "x is out of tolerance range";
	else
	{
		y = pow(sin(pow(x, t)), 2) / (log(pow(x, t)) * sqrt(1 + pow(x, s)));
		cout << y;
	}
	return 0;
}