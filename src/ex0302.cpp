#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string findQuadrant(double);

string findQuadrant(double deg){
    double rad = 3.14 * deg / 180;
    
    if (sin(rad) >= 0 && cos (rad) >= 0){
        return "Quadrant1";
    } else if (sin(rad) >= 0 && cos (rad) <= 0){
        return "Quadrant2";
    } else if (sin(rad) <= 0 && cos (rad) <= 0){
        return "Quadrant3";
    } else {
        return "Quadrant4";
    }
}

int main(){
    cout << findQuadrant(85) << endl;
    cout << findQuadrant(134) << endl;
    cout << findQuadrant(220) << endl;
    cout << findQuadrant(339) << endl;
}