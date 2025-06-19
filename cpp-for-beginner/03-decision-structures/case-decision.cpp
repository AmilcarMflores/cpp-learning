#include <iostream>
using namespace std;

int main() {
    char letter;

    cout << "What is the first letter of your name? ";
    cin >> letter;

    switch (letter) {
        case 'J':
            cout << "Maybe you are my cousin!" << endl;
            break;
        case 'A':
            cout << "Maybe you are my sister!" << endl;
            break;
        case 'L':
            cout << "Maybe you are my mom!" << endl;
            break;
        default:
            cout << "Matbe I don't know you." << endl;
    }
    return 0;
}