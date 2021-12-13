#include <iostream>
#include <cmath>
using namespace std;

int factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    cout << "Program to find sum of series: " << endl;

    int x, n, sign = 0;
    double sum = 0;
    cout << "Enter the value of x: " << endl;
    cin >> x;

    cout << "Enter the terms of series (n): " << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum += pow(-1, sign) * pow(x, i) / factorial(i);
            sign++;
        }
    }

    cout << "So the sum of the series upto " << n << " terms is: " << endl;
    cout << sum;

    return 0;
}