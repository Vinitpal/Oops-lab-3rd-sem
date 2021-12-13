#include <iostream>
using namespace std;

int sumWithWhile() {

    int i=1,sum=0;
    while(i<=100){
        sum+=i;
        i++;
    }
    return sum;
}
    
int sumWithDoWhile(){
    int i=1,sum=0;
    do{
        sum+=i;
        i++;
    }
    while(i<=100);
    return sum;
}

int sumWithFor() {
    int sum = 0;
    for(int i = 0; i <= 100; i++) {
        sum += i;        
    }
    return sum;
}

int main() {
    cout << "Program to find sum of first 100 numbers" << endl;

    cout << "Using while loop, sum is: " <<  endl;
    cout << sumWithWhile() << endl;

    cout << "Using do_while loop, sum is: " << endl;
    cout << sumWithDoWhile() << endl;

    cout << "Using for loop, sum is: " << endl;
    cout << sumWithFor() << endl;
    return 0;
}