// Task 04: 
#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    cout << "ASCII value of " << ch << " = " << (int)ch << endl;
    cout << "Next character = " << (char)(ch + 1) << endl;

    return 0;
}