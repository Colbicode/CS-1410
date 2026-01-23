#include <iostream>

using namespace std;

int main() {
    double x, y;
    char c;

    do {
        cout << "Enter operation (+, -, *, /) or q to quit: ";
        cin >> c;
        if (c == 'q') break;

        cout << "enter x and y; ";
        cin >> x >> y;

        switch (c) {
            case '+':
                cout << x + y << endl; break;
            case '-':
                cout << x - y << endl; break;
            case '*':
                cout << x * y << endl; break;
            case '/':
                if (y != 0) {
                    cout << x / y << endl;
                } else {
                    cout << "Error: Division by zero!" << endl;
                }
                break;
            default:
                cout << "I HAVE NO IDEA WHAT YOU JUST SAID!" << endl;

        }
    } while (c != 'q');

    return 0;
}