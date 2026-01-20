// Programa para calcular descuentos

#include <iostream>

using namespace std;

#define PROGRAM_MESSAGE "Calcule fácilmente los descuentos"

int precio, dcto;

int oferta(int a, int b){
    int x = (a*b)/100;
    return a - x;
}

int main(){
    cout << PROGRAM_MESSAGE << endl;
    cout << "Ingrese el precio y luego el descuento (Ej: 6000 30): ";
    cin >> precio >> dcto;

    int precio_oferta;
    precio_oferta = oferta(precio, dcto);

    cout << "El precio final es: "<<precio_oferta<<"$"<<endl;
}