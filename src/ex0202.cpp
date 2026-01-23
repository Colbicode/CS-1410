#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Enter day: ";
    string day;

    cin >> day;

    if (day == "Sunday" || day == "Saturday") {
        cout << "It's a weekend!" << endl;
    } else {
        cout << "It's a weekday." << endl;
    }
}