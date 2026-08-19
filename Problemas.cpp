#include <iostream>
#include <cmath>

using namespace std;
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

//**************problema 4***********problema 4***********problema 4**********problema 4*****************************

/*
int main()
{
    int hora=0, minuto=0, tiempo=0, horaII=0, minutoII=0, tiempoII=0, hora_total=0,minuto_total=0;

    while (true) {
        cout<<"ingresa un numero en tero en formato hhmm :"<<endl;
        cin>>tiempo;

        hora=tiempo/100;
        minuto=tiempo%100;

        if (tiempo < 0 || hora > 23 || minuto > 59) {
            cout << "Tiempo invalido, intenta de nuevamente:"<<endl;

        }//IF
        else {
            cout << "horarioo correcto: " << hora<<":"<<minuto << endl;
            break;}
        }//WHILE

//tiempo dos
    cout<<"ingresa el tiempo de duracion en formato hhmm: "<<endl;
    cin>>tiempoII;
    horaII=tiempoII/100;
    minutoII=tiempoII%100;

    if (tiempo < 0 || horaII > 23 || minutoII > 59){

        cout<<"tiempo invalido, intenta nuevaente"<<endl;

    }//IF
    else{cout<<"tiempo correcto"<<endl;}

    hora_total=hora+horaII;
    minuto_total=minuto+minutoII;

    if(minuto_total>=60){

        hora_total=hora_total+1;
        minuto_total=minuto_total-60;
    }

    cout<<"la hora es: "<<hora_total<<minuto_total<<endl;




return 0;
}

/*
if (){
    true;
    cout<<"tiempo invalido";
}else{cout<<"valor correcto"<<endl;}

*/


//*********problema 6***************problema 6*******************problema 6********************problema 6*************************
/*
int main() {
    int x;
    cout << "ingrese el numero : ";
    cin >> x;

    float e = 0.0;
    float factorial = 1.0;


    for (int i = 0; i < x; i++)
    {
        if (i == 0) {
            factorial = 1.0;
        } else {
            factorial *= i;
        }

        e += 1.0 / factorial; // Suma 1 / i!
    }


    cout.precision(10);
    cout << "El valor aproximado de e con " << n << " terminos es: " << e <<endl;

    return 0;

}
*/


//*******problema 8*************problema 8****************problema 8******************problema 8******************************


int main()
{
    int a=0, b=0, c=0, sum=0,sum2=0;

    cout<<"ingresa un numero para (a): "<<endl;
    cin>>a;

    cout<<"ingresa un numero para (b): "<<endl;
    cin>>b;

    cout<<"ingresa un numero para (c): "<<endl;
    cin>>c;

    for (int i = a; i <= c; i+=a) {

        if(i<=c){
        sum=sum+i;
            cout<<i<<"+";}

    }

   for (int x = b; x <= c; x+=b) {

       if(x<=c){
       sum2=sum2+x;
           cout<<x<<"+";}

    }
cout<<"0="<<sum+sum2;


    return 0;
}

