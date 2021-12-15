#include <iostream>
using namespace std;

class Date
{
public:
    int d, m, y;

    Date(int date = 15, int mon = 12, int year = 21)
    {
        d = date;
        m = mon;
        y = year;
    }

    void showDate()
    {
        cout << d << "-" << m << "-" << y << endl;
    }
};

int main()
{
    Date today;
    Date tmrw(16, 12, 21);

    today.showDate();
    tmrw.showDate();

    return 0;
}