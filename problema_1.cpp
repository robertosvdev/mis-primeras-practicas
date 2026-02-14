#include <iostream>
#include <cmath>
using namespace std;
/*Diseñe un  programa  que  dadas  las  coordenadas  (x,y)  de  un  punto  en  el  plano, 
determine y muestre sus coordenadas polares (R,θ).*/

int main(){

    double x,y,r,tetta;
    const double PI = 3.14159265358979323846;
    char opcion;

    do
    
    {
        cout << "Ingrese la coordenada del eje x"<< endl;
    cin >> x;

    cout << "Ingrese la coordenada del eje y"<< endl;
    cin >> y;

    r =sqrt((x*x)+(y*y));

    cout << "el radio es: "<< r << endl; 

    tetta = (atan2(y,x))*(180/PI);

    cout << "El angulo es: "<< tetta <<endl;

    cout<<"\nEn cartesianas: " "("<< x <<","<< y <<")"<< " en polares --> "<< "(" << r <<","<<tetta<< ")";

    cout << "\n¿Deseas calcular otro punto? (s/n): ";
    cin >> opcion;


    } while (opcion=='s'||opcion=='S');
    

    



    return 0;
}