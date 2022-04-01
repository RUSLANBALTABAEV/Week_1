// Listing_13.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
    float x, r;
    cout << "x: ";
    cin >> x;
    r = (sqrt(x) * sin(pow(x, 2) / 2) - 1.3) / (pow(sqrt(x), 1./ 5) + exp(3 * x) + abs(cos(x)));
    cout << "r: " << r;
    return 0;
}