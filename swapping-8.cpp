// Tas8
#include<iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    cout << "Before swap: a = " << a << ", b = " << b << endl;

    // Using a third variable (temp)
    int temp = a;
    a = b;
    b = temp;

    cout << "After swap : a = " << a << ", b = " << b << endl;

    return 0;
}