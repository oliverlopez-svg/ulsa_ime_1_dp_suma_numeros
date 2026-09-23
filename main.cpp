
#include <iostream>

using namespace std;

int main() {
   
    const int CANTIDAD = 5;

    int contador = 0;

    double suma   = 0.0;
    double numero = 0.0;

    while (contador < CANTIDAD){
        std::cout << "ingresar numero" << endl;
        std::cin >> numero;
        if (std::cin) {
            suma += numero;
            contador++;
        } else {
            std::cout << "numero no valido" << endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }
    }

    std::cout << "Suma de " << CANTIDAD << " numeros\n";

   
    return 0;
}