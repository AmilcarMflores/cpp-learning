#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 3;

    cout << "Addition: " << (a + b) << endl;
    cout << "Substraction: " << (a - b) << endl;
    cout << "Multiplication: " << (a * b) << endl;
    cout << "Modulo: " << (a % b) << endl;

    a++; // Increment
    cout << "Increment: " << a << endl;

    a--; // Decrement
    cout << "Decrement: " << a << endl;

    return 0;
}