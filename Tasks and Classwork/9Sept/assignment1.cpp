#include <iostream>
using namespace std;

int main() {
    int readAmt = 12; // How many readings to take
    float readings[readAmt];
    float maxReading, minReading;
    float sum {0}, avg;
    int bel20 {0}, abo100 {0};

    // take inputs for reading
    for ( int i = 0; i < readAmt; i++){
        cout << "Enter distance reading " << i + 1 << ": ";
        cin >> readings[i];
    }

    // initialise with a real temporary value
    maxReading = minReading = readings[0];
    // i did this because if we were to keep it as any value other than the range of the readings, it would sustain the loop and we outputted finally which would be wrong.
    // could also be done with INT_MAX & INT_MIN for minReading & maxReading respectively.

    
    for (int i = 0; i < readAmt; i++) {
        if (readings[i] > maxReading) {
            maxReading = readings[i];
        }
        if (readings[i] < minReading) {
            minReading = readings[i];
        }


        sum += readings[i];
        if (readings[i] < 20) {
            bel20++;
        }

        if (readings[i] > 100) {
            abo100++;
        }
    }

    avg = sum/readAmt;

    cout << "\nMaximum reading: " << maxReading << " cm.";
    cout << "\nMinimum reading: " << minReading << " cm.";
    cout << "\nAverage reading: " << avg << " cm";
    cout << "\nReadings below 20cm: " << bel20;
    cout << "\nReadings above 100cm: " << abo100;
    return 0;
}
