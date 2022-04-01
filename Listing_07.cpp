// Listing_07.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float x, r;
	cout << "x: ";
	cin >> x;
	r = (sqrt(pow(sin(x / 2), 1/.3) + (pow(sqrt(exp(1.3 * x) + exp(-1.3 * x)), 1./ 3)))) / (abs(x - 7 / 9));
	cout << "r: " << r;
	return 0;
}