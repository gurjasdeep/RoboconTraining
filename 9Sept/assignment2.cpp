#include <iostream>
using namespace std;

int main(){
    long long int number;
    int digitCnt[10]={0}; // size 10 cuz base10 (0-9)

    cout << "Enter a number: ";
    cin >> number;
    

    if (number==0) {digitCnt[0] = 1;}
    else {
        if (number< 0) {
            number= -number;
        } // if number is negative convert back to positive

        while (number> 0) {
            int digit = number % 10;
            digitCnt[digit]++;
            number = number/10;
	    // extract the last digit, increment amt of that digit in array, remove the last digit to continue
        }
    }


    cout << "\nDigit frequency:\n";

    for (int i = 0; i < 10; i++) {
        if (digitCnt[i] > 0) {
            cout << i << " appears " << digitCnt[i] << " times\n";
        }
    }

    return 0;
}
