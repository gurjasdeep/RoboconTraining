#include <iostream>
using namespace std;

void moveForward(){
    cout << "*robot moves forward*" << "\n";
}
void moveBackward(){
    cout << "*robot moves backward*" << "\n";
}
void moveRight(){
    cout << "*robot moves to the right*" << "\n";
}
void moveLeft(){
    cout << "*robot moves to the left*" << "\n";
}

int main() {
    char inp;
    
    do {
        cout << "Move where (r,l,f,b)?\n>>";
        cin >> inp;
        switch (inp)
        {
        case 'f':
            moveForward();
            break;
        case 'b':
            moveBackward();
            break;
        case 'r':
            moveRight();
            break;
        case 'l':
            moveLeft();
            break;
        
        default:
            cout << "Invalid Instruction.\n";
            break;
        }
    } while (inp !='q');  
}
