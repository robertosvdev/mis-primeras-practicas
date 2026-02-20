#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
/*Diseñe un programa que dados dos puntos en el plano por sus coordenadas (x1, 
y1)  y  (x2,  y2)  calcule  y muestre  la  longitud  del  segmento  que  determinan  estos 
puntos,  y  que  se  calculen  y  muestren  las  coordenadas  del  punto  medio  de  ese 
segmento.*/

int main(){

    float x1, x2, y1, y2, r, xm, ym, pm;
    char opcion;

    do {

    system("cls");

    cout<< "\n --- CALCULO DE UN SEGMENTO DE RECTA ---"<< endl;   

    cout<< "Ingrese la coordenada x del primer punto: ";
    cin>> x1;

    cout<< "Ingrese la coordenada y del primer punto: ";
    cin>> y1;
    
    cout<< "Ingrese la coordenada x del segundo punto: ";
    cin>> x2;

    cout<< "Ingrese la coordenada y del segundo punto: ";
    cin>> y2;

    //Aca hacemos los calculos, despues vemos un ciclo o buble para repetir la pregunta

     r = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
     xm = (x2+x1)/2;
     ym = (y2+y1)/2;
     //pm = "("<< xm <<" , "<<ym<<")";

    cout<< "\n RESULTADOS :";
    cout<< "La longitud del segmento es: "<< r << endl;
    cout << "(" << xm << ", " << ym << ")" << endl;

    cout<< "Desea calcular nuevamente la longitud entre dos puntos y la coordenada del punto medio? s/n ";
    cin >> opcion;

    } while (opcion =='s'|| opcion == 'S');

    cout << "Programa finalizado" << endl;
    system("cls");


    return 0;
}