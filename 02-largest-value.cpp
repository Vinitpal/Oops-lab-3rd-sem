#include <iostream>
using namespace std;

int max(int a, int b)
{
    switch (a > b)
    {
    case 0:
        return b;
    case 1:
        return a;
    }
}

int max(int a, int b, int c)
{
    int maxOfAB = max(a, b);

    switch (maxOfAB > c)
    {
    case 0:
        return c;
    case 1:
        return maxOfAB;
    }
}

int max(int a, int b, int c, int d)
{

    int maxOfABC = max(a, b, c);

    switch (maxOfABC > d)
    {
    case 0:
        return d;
    case 1:
        return maxOfABC;
    }
}

int main()
{

    cout << "Program to find maximum number" << endl;
    int a, b, c, d;
    cout << "Enter four numbers: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    // int a = 1, b = 2, c = 3, d = 4;

    cout << "Max of " << a << " and " << b << endl;
    cout << max(a, b) << endl;

    cout << "Max of " << a << ", " << b << " and " << c << endl;
    cout << max(a, b, c) << endl;

    cout << "Max of " << a << ", " << b << ", " << c << " and " << d << endl;
    cout << max(a, b, c, d) << endl;

    return 0;
}