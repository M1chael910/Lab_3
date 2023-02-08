/*
 * Michael Murphy
 * CSC 121
 * Lab_3
 */

#include <iostream>

using namespace std;

int main() {
    int list[6] = {0,1,2,3,4,5};
    int replacementNum = 8;
    int pickedNum = 0;

    cout << "pick a number from the following list - " << endl;
    cout << list[0] << " " << list[1] << " "<< list[2]<< " "
    << list[3]<< " " << list[4]<< " " << list[5] << endl;

    cin >> pickedNum;
    if (pickedNum != replacementNum){
    list[pickedNum] = replacementNum;
    cout << list[0] << " " << list[1] << " "<< list[2]<< " "
         << list[3]<< " " << list[4]<< " " << list[5] << endl;
    }

    cout << "pick another number from the list" << endl;
    cin >> pickedNum;
    if (pickedNum != replacementNum) {
        list[pickedNum] = replacementNum;
        cout << list[0] << " " << list[1] << " " << list[2] << " "
             << list[3] << " " << list[4] << " " << list[5] << endl;
    }
    cout << "pick another number from the list" << endl;
    cin >> pickedNum;
    if (pickedNum != replacementNum) {
        list[pickedNum] = replacementNum;
        cout << list[0] << " " << list[1] << " " << list[2] << " "
             << list[3] << " " << list[4] << " " << list[5] << endl;
    }
    cout << "pick another number from the list" << endl;

    cin >> pickedNum;
    if (pickedNum != replacementNum) {
        list[pickedNum] = replacementNum;
        cout << list[0] << " " << list[1] << " " << list[2] << " "
             << list[3] << " " << list[4] << " " << list[5] << endl;
    }

    cout << "pick another number from the list" << endl;
    cin >> pickedNum;
    if (pickedNum != replacementNum) {
        list[pickedNum] = replacementNum;
        cout << list[0] << " " << list[1] << " " << list[2] << " "
             << list[3] << " " << list[4] << " " << list[5] << endl;
    }

    cout << "pick another number from the list" << endl;
    cin >> pickedNum;
    if (pickedNum != replacementNum) {
        list[pickedNum] = replacementNum;
        cout << list[0] << " " << list[1] << " " << list[2] << " "
             << list[3] << " " << list[4] << " " << list[5] << endl;
    }
    return 0;
}

