#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << setw(6) << "Odd" << setw(6) << "Even" << endl;

    int i = 1;
    while (i < 20) {
        cout << setw(6) << i << setw(6) << i + 1 << endl;
        i += 2;
    }
}