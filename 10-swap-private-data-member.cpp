#include <iostream>
using namespace std;

class C_section;
class B_section
{
private:
    int b_section_pass;

public:
    B_section()
    {
        b_section_pass = 321;
    }
    void display_b_section_pass()
    {
        cout << "b section pass is: " << b_section_pass << endl;
    }
    friend void swap(C_section &, B_section &);
};

class C_section
{
private:
    int c_section_pass;

public:
    C_section()
    {
        c_section_pass = 123;
    }
    void display_c_section_pass()
    {
        cout << "c section pass is: " << c_section_pass << endl;
    }
    friend void swap(C_section &, B_section &);
};

void swap(C_section &s1, B_section &s2)
{
    int temp;
    temp = s1.c_section_pass;
    s1.c_section_pass = s2.b_section_pass;
    s2.b_section_pass = temp;
}

int main()
{
    C_section Vinit;
    B_section Kirua;

    cout << "The data before swapping is: " << endl;
    Vinit.display_c_section_pass();
    Kirua.display_b_section_pass();

    swap(Vinit, Kirua);

    cout << "The data after swapping is: " << endl;
    Vinit.display_c_section_pass();
    Kirua.display_b_section_pass();

    return 0;
}