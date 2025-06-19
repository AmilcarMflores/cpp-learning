#include <iostream>
using namespace std;

int main() {
    string name;

    cout << "What is your name? ";
    cin >> name;

    if (name == "John") {
        cout << "You are my cousin!" << endl;
    }
    else if (name == "Aphrodite") {
        cout << "You are my sister!" << endl;
    }
    else if (name == "Loukia") {
        cout << "You are my mom!" << endl;
    }
    else {
        cout << "Sorry, I don't know you." << endl;
    }

    return 0;
}