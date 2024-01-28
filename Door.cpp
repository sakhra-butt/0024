

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
 void closeDoor();
void lockDoor();
 void unlockDoor() {
        isLocked = false;
        cout << "Door is now unlocked." << endl;
    }

bool isDoorOpen()const;
bool isDoorLocked() const;

int main(){
return 0;
}