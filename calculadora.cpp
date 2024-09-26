#include <iostream>
 using namespace std;

 int main (){
    // Declaración de variables
    float numero1, numero2, resultado;

    // Solicitar los números al usuario
    cout << "ingresa el primer número";
    cin >> numero1;
    cout << "ingresa el segundo número";
    cin >> numero2;
     
     // Realizar la resta
    resultado = numero1 - numero2;

    // Mostrar el resultado
    cout << "La resta de" << numero1 << "-" << numero2 "es;" << resultado << endl;
    return 0;
 }
 
