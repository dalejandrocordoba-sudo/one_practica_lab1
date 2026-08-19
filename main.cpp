#include <iostream>
#include <cmath>

using namespace std;

//ejercicio 1
/*
int main()
{

    float A;
    float B;
    float resultado;

    cout << "Ingresa el valor del numerador: " << endl;
    cin >>A;

    cout <<"Ingresa el valor del denominador: " << endl;
    cin>>B;

    resultado=A/B;

    cout << "el residuo de la division de "<<A <<" sobre "<< B <<" es "<<resultado << endl;
    return 0;
}
*/


//ejercicio 2

/*
int main(){

    int numero;

    cout<<"Ingresa un numero entero: " << endl;
    cin>>numero;

    if (numero%2==0){
        cout<<"El numero  "<<numero<<" es par."<<endl;

    }

    else {
        cout<< "el Numero es impar.";
    }

    return 1;
}
*/


//ejercicio 3
/*
int main(){


    int a;
    int b;

    cout<<"MAYOR O MENOR"<<endl;


    cout<<"ingresa un numero entero para A"<<endl;;
    cin>>a;

    cout<<"ingresa un numero entero para B"<<endl;
    cin>>b;

    if(a>b){

        cout<<"El numero "<<a<<" es mayor que "<<b;

    }else{
        cout<<"El numero "<<b<<" es mayor que "<<a;
    }



    return 0;
}
*/


// ejercicio 5 //redondeo
/*
int main(){

    float A, B;
    float resultado, redondeo;

    cout<<"Introduce el valor de A:"<<endl;
    cin>>A;

    cout<<"introduce el valor de B: "<<endl;
    cin>>B;

    resultado=A/B;
    redondeo=round(resultado);


    cout<<redondeo;
}
*/


//ejercicio 6//
/*
int main(){

    int A, B;
    int resultado=1;

    cout<<"Ingresa el valor para A: "<<endl; //base
    cin>>A;

    cout<<"Ingresa el valor para B: "<<endl; //exponente
    cin>>B;

    for (int i = 1; i <= B; ++i) {
        resultado=resultado*A;


    }
    cout<<"el resultado es: "<<resultado<<endl;

    return 0;
}

*/


//ejercicio 7
/*
int main(){

    int N; //numero entero
    int resultado=0;

    cout<<"Ingresa un numero entero: "<<endl;
    cin>>N;

    for (int i = 1; i <= N; ++i) {

        resultado=resultado+i;

    }
    cout<<resultado<<endl;

    return 0;
}
*/


//ejercicio 8
/*
int main()
{
    int N;
    int resultado=1;

    cout<<"ingresa un Numero entero positivo: \n\n"<<endl;
    cin>>N;

    for (int i = 1; i <= N; ++i) {
        resultado=resultado*i;


    }


    cout<<"el resultado es: "<<resultado<<"\n\n";


    return 0;
}
*/



//ejercicio 9
/*
int main()
{
    //variables
    float R,area,perimetro, pi=3.1416;


    cout<<"Ingresa el radio del circulo: \n\n"<<endl;
    cin>>R;

    //area
    area=pi*R*R;

    //perimetro
    perimetro=2*pi*R;

    cout<<"el area del circulo es: "<<area<<" su perimetro es de: "<<perimetro;


    return 0;
}
*/


//ejercicio 10 //multiplos
/*
int main()
{
    int N=0;

    cout<<"Ingrese un valor: "<<endl;
    cin>>N;

    for (int i = N; i <= 100; i+=N) {

        cout<<i<<endl;

    }



    return 0;
}

*/

//ejercicio 11
/*
int main() {
    int n;

    cout << "Ingrese un número N: ";
    cin >> n;

    cout << "\nMúltiplos de " << n << " menores que 100:\n";

    // Comenzamos en 'n', avanzamos sumando 'n' en cada paso mientras sea menor que 100
    for (int i = n; i < 100; i += n) {
        cout << i << endl;
    }

    return 0;
}
*/


//******************************problemas************************problemas **************************problemas***************problemas*****************problemas***************************************


//problema 2
/*
int main()
{
    int cantidad;


    cout<<"ingreseel valor para hacer la combinacion: "<<endl;
    cin>>cantidad;

//devueltas de billetes
    if(cantidad>=50000){

        cout<<"billetes de 50000: "<<cantidad/50000<<endl;
        cantidad=cantidad%50000;
    }
    if(cantidad>=20000){

        cout<<"billetes de 20000: "<<cantidad/20000<<endl;
        cantidad=cantidad%20000;

    }
    if (cantidad>=10000){
        cout<<"billetes de 10000: "<< cantidad/10000<<endl;
        cantidad=cantidad%10000;
    }
    if(cantidad>=5000){
        cout<<"billetes de 5000: "<<cantidad/5000<<endl;
        cantidad=cantidad%5000;

    }
    if(cantidad>=1000){
        cout<<"billetes de 1000: "<<cantidad/1000<<endl;
        cantidad=cantidad%1000;}

//debueltas de monedas

    if(cantidad>=500){
        cout<<"monedas de 1000: "<<cantidad/500<<endl;
        cantidad=cantidad%500;}

    if(cantidad>=200){
        cout<<"monedas de 200: "<<cantidad/200<<endl;
        cantidad=cantidad%200;}

    if(cantidad>=100){
        cout<<"monedas de 100: "<<cantidad/100<<endl;
        cantidad=cantidad%100;}

    if(cantidad>=50){
        cout<<"monedas de 50: "<<cantidad/50<<endl;
        cantidad=cantidad%50;}
    else
    {cout<<"faltan: "<<cantidad<<" pesos";}



 return 0;
}

*/

//problema 6


