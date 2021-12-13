#include <iostream>
using namespace std;

int main() {
    cout << "Program to check whether a no. is prime or not" << endl;

    int num;
    cout << "Enter a number: " << endl;
    cin >> num;

    for(int i = 2; i <= num/2; i++) {
        if (num % i == 0) {
            cout << num << " is not a prime number"; 
            return 0;
        }
    }

    cout << num << " is a prime number"; 
    return 0;
}