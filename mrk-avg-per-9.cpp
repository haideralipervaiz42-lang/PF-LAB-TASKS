// Task 9


#include <iostream>
using namespace std;




int main() {
    
    
    float m1, m2, m3;
    cout << "Enter marks of 3 subjects (out of 100): ";
    cin >> m1 >> m2 >> m3;

    float total = m1 + m2 + m3;
    float average = total / 3.0f;
    float percentage = average; // since each is out of 100

    cout << "Total = " << total << " / 300" << endl;
    cout << "Average = " << average << endl;
    cout << "Percentage = " << percentage << " %" << endl;





    return 0;
}