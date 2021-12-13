#include <iostream>

using namespace std;

void swapCallbyValue(int x, int y)
{
    int t;

    t = x;
    x = y;
    y = t;

    cout << "call by value"
         << " a = " << x << " b = " << y << endl;
}
void swapCallbyRef(int *x, int *y)
{
    int t;

    t = *x;
    *x = *y;
    *y = t;
    cout << "call by reference"
         << " a = " << *x << " b = " << *y << endl;
}

int main()
{
    int a, b;
    cout << "Please enter value of a & b" << endl;
    cin >> a >> b;

    swapCallbyValue(a, b);
    swapCallbyRef(&a, &b);

    cout << "a = " << a << " b = " << b << "\n";

    return 0;
}
