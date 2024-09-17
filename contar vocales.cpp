#include <iostream>
#include <string>
using namespace std;

void contarVocales() {
    string texto;
    cout << "Ingrese una cadena de texto: ";
    cin.ignore();
    getline(cin, texto);

    int vocales = 0;

    for (char c : texto) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vocales++;
        }
    }

    cout << "El número de vocales en la cadena es: " << vocales << endl;
}



int main () {

contarVocales();




return 0;
}
