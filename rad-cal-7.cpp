// Task7: Circle Calculator using const
#include <iostream>
using namespace std;

int main() {
    
    
    const float PI = 3.14159;
    
    float radius;
    
    cout << "Enter radius: ";
    cin >> radius;

    float area = PI * radius * radius;
    float circumference = 2 * PI * radius;

    cout << "Area = " << area << endl;
    
    
    
    cout << "Circumference = " << circumference << endl;

    return 0;
}