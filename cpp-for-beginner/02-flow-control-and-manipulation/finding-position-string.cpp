#include <iostream>
using namespace std;

int main() {
    int i;
    string a;
    
    a = "I am newbie in C++. C++ rocks!";
    i = a.find("newbie");

    cout << i << endl; //5
    cout << a.find("C++") << endl; //15
    cout << (int)a.find("Java") << endl; //1

    return 0;
}