#include <iostream>
using namespace std;

class Robot{
    private:
        int speed;
        int battery;
	//dont want this to be accessed directly + abstraction
    public:
        void setSpeed(int sp) {
            if (sp >= 0 && sp <= 100)
                speed = sp;
            else
                speed = 0;
        }

        void setBattery(int batt) {
            if (batt >= 0 && batt <= 100)
                battery = batt;
            else
                battery = 0;
        }

        void moveForward() {
            if (battery > 0) {
                cout << "Moving Forward\n";
                battery -= 5;
                if (battery < 0){battery = 0;}
            }
            else {
                cout << "Battery emptied. Robot cant move.\n";
            }
        }

        void moveBackward() {
            if (battery > 0) {
                cout << "Moving Backward\n";
                battery -= 5;

                if (battery < 0){battery = 0;}
            }
            else {
                cout << "Battery emptied. Robot cant move.\n";
            }
        }

        void turnLeft() {
            if (battery > 0) {
                cout << "Turning Left\n";
                battery -= 5;

                if (battery < 0){battery = 0;}
            }
            else {
                cout << "Battery empteid. Robot cant move.\n";
            }
        }

        void turnRight() {
            if (battery > 0) {
                cout << "Turning Right\n";
                battery -= 5;

                if (battery < 0){battery = 0;}
            }
            else {
                cout << "Battery empteid. Robot cant move.\n";
            }
        }

        void displayStatus() {
            cout << "Robot Speed: " << speed << endl;
            cout << "Battery: " << battery << "%" << endl;
        }
};

int main() {
    Robot robot;

    int speed, battery;

    cout << "Enter Speed: ";
    cin >> speed;
    cout << "Enter Battery: ";
    cin >> battery;

    robot.setSpeed(speed);
    robot.setBattery(battery);
    robot.moveBackward();
    robot.turnRight();
    robot.moveForward();
    robot.turnLeft();
    robot.turnLeft();
    robot.moveBackward();
    robot.turnRight();

    robot.displayStatus();
    return 0;
}
