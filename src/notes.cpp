#include <fstream>
#include <iostream>

using namespace std;

int main() {

    ifstream in("notes.txt");
    int n, m;
    while (in >> n >> m) {
        cout << n << " + " << m << " = " << n + m << endl;
    }

    in.close();

    return 0;
}
