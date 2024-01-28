

#include<iostream> 
using namespace std;

class Door {
private:
    bool isopen;
    bool isLocked;

public:
Door()// Initializes the door as closed and unlocked
 void openDoor() {
        isopen = true;
        cout << "Door is now open." << endl;
    }
void closeDoor() {
        isopen = false;
        cout << "Door is now closed." << endl;
    }
void lockDoor() {
        isLocked = true;
        cout << "Door is now locked." << endl;
    }
 void unlockDoor() {
        isLocked = false;
        cout << "Door is now unlocked." << endl;
    }

bool isDoorOpen() const {
        return isopen;
    }

bool isDoorLocked() const {
        return isLocked;
    }
};
int main(){
return 0;
}