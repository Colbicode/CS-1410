#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int n;
    int count;
    int minimum;
    int maximum;
    int total = 0;
    double average;
    
    // User input and value updates
    for (int i = 1; i <= 5; i++) {
        do {
            cout << "---------------------------------------------------" << endl;
            cout << "Enter a positive integer that is a multiple of 3: ";
            cin >> n;

            if (!(n > 0 && n % 3 == 0)) {
                cout << "That's not an answer we expected. Try again." << endl;
            }
        } while (!(n > 0 && n % 3 == 0));

        // Initialize maximum and minimum variables
        if (i == 1) {
            maximum = n;
            minimum = n;
        }

        cout << "Good Job!" << endl;
        if (n < minimum) {
            minimum = n;
        } else if (n > maximum) {
            maximum = n;
        }
        total += n;
        count = i;
    }

    // Calculate the average
    average = static_cast<double>(total) / count;

    // Results
    cout << setw(5) << "Count" << setw(10) << "Minimum" << setw(10) << "Maximum" << setw(10) << "Total" << setw(10) << "Average" << endl;
    for (int i = 0; i < 45; i++) {
        cout << "=";
    }
    cout << endl;
    cout << setw(5) << count << setw(10) << minimum << setw(10) << maximum << setw(10) << total << setw(10) << average << endl;

    return 0;
}