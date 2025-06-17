#include <iostream>

using namespace std;
int main() {
    string name;
    cin >> name;
    cout << "Hello " << name << endl;

    // Más de un valor
    string name2;
    int age;

    cin >> name2 >> age;
    cout << "Wow, you are already " << age << " years old, " << name << "!" << endl;
    return 0;
}