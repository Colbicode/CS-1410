#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    bool odd = true;
    cout << setw(3) << "Odd"
         << setw(10) << "Even" << endl;

    for (int i = 1; i <= 20; i++) {
        if (odd == true) {
            cout << setw(3) << i;
        } else {
            cout << setw (10) << i << endl;
        }
        odd = !odd;
    }

    int count = 0;
    for(int i = 1; i < 12; i++){

        cout << "Welcome to C++ programming!" << endl;
        cout << count++ << endl;
    }

    cout << 10 << " times.\n";
    return 0;
}
