#include <iostream>
using namespace std;

class Dio
{
public:
    static int count;
    int objCount = 0;

    void call()
    {
        count++;
        objCount++;
    }
};

int Dio::count;

int main()
{
    Dio obj1;
    obj1.call();
    obj1.call();
    obj1.call();
    obj1.call();

    Dio obj2;
    obj2.call();
    obj2.call();
    obj2.call();

    cout << "object 1 is called: " << obj1.objCount << " times" << endl;
    cout << "object 2 is called: " << obj2.objCount << " times" << endl;

    cout << "Total call is: " << Dio::count << endl;
    return 0;
}