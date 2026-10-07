// Task 6: Temperature Converter
#include <iostream>
using namespace std;



int main() {
    float celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    float fahrenheit = (celsius * 9.0f / 5.0f) + 32;
    cout << celsius << " C = " << fahrenheit << " F" << endl;

    return 0;
}