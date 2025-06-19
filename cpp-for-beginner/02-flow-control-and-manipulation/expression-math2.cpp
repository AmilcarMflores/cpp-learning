#include <iostream>
using namespace std;

int main() {
    double denominator, nominator, temp1, temp2, temp3, w, x, y, z;
    cin >> x >> w >> z;

    temp1 = 3 * x * x + 5 * x + 2;
    temp2 = 7 * w + 1 / z;
    temp3 = (3 + x)  / 7;
    nominator = 5 * temp1 / temp2 + z;
    denominator = 4 * temp3;

    y = nominator / denominator;
    cout << "The result is: " << y << endl;

    return 0;
}