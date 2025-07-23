//exp 3 
//to find coordinates are from which quadrant 

#include <iostream>
using namespace std;

int main() {
    float a;
    cout << "Enter first coordinate a: ";
    cin >> a;

    float b;
    cout << "Enter second coordinate b: ";
    cin >> b;

    if (a > 0 && b > 0)
        cout << "The coordinate lies in First quadrant." << endl;
    else if (a < 0 && b > 0)
        cout << "The coordinate lies in Second quadrant." << endl;
    else if (a < 0 && b < 0)
        cout << "The coordinate lies in Third quadrant." << endl;
    else if (a > 0 && b < 0)
        cout << "The coordinate lies in Fourth quadrant." << endl;
    else if (a == 0 && b == 0)
        cout << "The coordinate lies at the Origin." << endl;
    else if (a == 0)
        cout << "The coordinate lies on the Y-axis." << endl;
    else if (b == 0)
        cout << "The coordinate lies on the X-axis." << endl;

    return 0;
}
