#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, y;

    a = 5.312;
    y = round(a * pow(10,2)) / pow(10,2);
    cout << y << endl; //5.31

    a = 5.315;
    y = round(a * pow(10,2)) / pow(10,2);
    cout << y << endl; //5.32
    
    cout << round(2.3447 * pow(10,3)) / pow(10,3) << endl; //2.345
    cout << round(2.3447 * 1000) / 1000 << endl; //2.345

    return 0;
}