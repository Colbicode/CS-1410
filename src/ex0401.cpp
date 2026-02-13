#include <iostream>
#include <string>
using namespace std;

struct Date {
    int year;
    string month;
    int day;
};

struct Point { 
    int x, y;
};

void printDate(Date& d) {
    cout << d.month << "/" << d.day << "/" << d.year << endl;
}

void printPoint(Point& p) {
    cout << "(" << p.x << "," << p.y << ")" << endl;
}
int main() {
    //Structures set with information for Date of Birth and Wedding Day.
    Date dob {2025, "March", 21};
    Date weddingDay = {2000, "May", 31};
    
    //Points to be compared.
    Point p, q, h;
    //Point p = (10, 30)

    //Input for points
    char trash;
    cout << "Enter point p: ";
    cin >> trash >> p.x >> trash >> p.y >> trash;

    cout << "Enter point q: ";
    cin >> trash >> q.x >> trash >> q.y >> trash;

    //Calculate halfway point
    h.x = (p.x + q.x)/2;
    h.y = (p.y + q.y)/2;

    //Print Date of Birth and wedding day;
    cout << "Date of Birth: ";
    printDate(dob);
    cout << "Wedding Day: ";
    printDate(weddingDay);

    cout << "Points and Halfway: ";
    printPoint(p);
    printPoint(q);
    printPoint(h);
}