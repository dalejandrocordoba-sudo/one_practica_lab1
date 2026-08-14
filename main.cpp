#include <iostream>

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

// ejercicio 4
int main(){

    float A;
    float B;
    float resultado;
    int final;

    cout<<"Introduce el valor de A:"<<endl;
    cin>>A;

    cout<<"introduce el valor de B: "<<endl;
    cin>>B;

    resultado=A/B;
    final=resultado%2=;


    cout<<final;
}

