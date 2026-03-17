#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

//Global Variables
int posX;
int posY;

//Prototypes
void printArr(int a[][5]);

void printArr(int a[][5]) {
    for (int i = 1; i <= 5; i++) {
        for (int s = 1; s <= 5; s++) {
            cout << setw(2) << a[i-1][s-1];
        }
        cout << endl;
    }
}


int main() {
    //Initial Array
    char input;
    posX = 2;
    posY = 2;
    int arr[][5] {{0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 1, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}};

    do {
        //Prompt input
        arr[posY][posX] = 0;
        cout << endl
             << "Where would you like to move?" << endl
             << "w: UP" << endl
             << "a: LEFT" << endl
             << "s: DOWN" << endl
             << "d: RIGHT" << endl
             << "x: exit" << endl;
        cin >> input;

        if (input != 'w' && input != 'a' && input != 's' && input != 'd' && input != 'x') {
            input = 'x';
        }

        switch (input) {
            case 'w': posY--; break;
            case 'a': posX--; break;
            case 's': posY++; break;
            case 'd': posX++; break;
            default: break;
        }

        arr[posY][posX] = 1;

        printArr(arr);
    } while (input != 'x');

    return 1;
}