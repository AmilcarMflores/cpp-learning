#include <iostream>

using namespace std;
int main() {
    double productPrice;
    string productName;

    cout << "Enter product price: ";
    cin >> productPrice;

    // Ignora el carácter de nueva línea que queda en el búfer después de leer el precio
    // Esto es necesario para que el siguiente getline funcione correctamente
    cin.ignore(1, '\n');

    cout << "Enter product name: ";
    
    // Lee una línea completa de texto (incluyendo espacios) y la almacena en productName
    getline(cin, productName);
    cout << productPrice << " " << productName;

    // Indica que el programa terminó correctamente
    return 0;
}