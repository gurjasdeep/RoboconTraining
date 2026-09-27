#include <iostream>
using namespace std;


class Robot{
    private:
        int battery;
    public:
        void setBattery(int value) {
            if (value >= 0 && value <=100) {
                battery = value;
            }
        }

        int getBattery() {
            return battery;
        }
};

int main() {
    Robot r;
    r.setBattery(90);
    cout << r.getBattery();
}
