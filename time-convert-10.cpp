// Task10


#include <iostream>

using namespace std;


int main() {
    long totalSeconds;
    cout << "Enter total seconds: ";
    cin >> totalSeconds;



    long hours = totalSeconds / 3600;
    long remainingSeconds = totalSeconds % 3600;
    long minutes = remainingSeconds / 60;
    long seconds = remainingSeconds % 60;


    cout << totalSeconds << " seconds = " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;


    return 0;
}