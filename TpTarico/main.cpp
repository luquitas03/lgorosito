#include <iostream>

using namespace std;

void tablaInversa(){

    int numero;

     cout << "ingrese un numero ";
     cin >> numero;

     if(numero <= 0){
          cout<< "ingrese un numero mayor a 0" ;
     } else{
         for (int i = 10 ; i >= 1; i--){

     cout << numero << " x " << i << " = " << numero * i <<endl;
  }
     }
}
void biciesto (){
    int anio;
    cout << " ingresa un anio y te digo si es viciesto o no" << endl;
    cin >> anio;

    if(anio % 4 == 0 && anio % 400 == 0 ){
        cout << "el anio es biciesto" << endl ;
    }else
    cout << "no es biciesto " << endl;
}


void fizzBuzz(){
for(int I=0;I <= 100; I++){
    if( I % 3 ==0 && I % 5 ==0){
        cout << "FIZZBUZZ" << endl;
}
    else if(I % 3 == 0 && I % 5!=0){
        cout << "FIZZ" << endl;
}
    else if(I % 5 == 0 && I % 3 !=0){
        cout << "BUZZ" << endl;
}
    else if(I % 5!=0 && I % 3 !=0){cout << I << endl;
    }
}
}



int main()
{
int resp;
do{
        cout << "|----------------------------------------|" << endl ;
        cout << "| ingrese la opcion que desee            |"<< endl;
        cout << "| 1- determinar si el anio es viciesto   |" << endl;
        cout << "| 2- tabla de multiplicar inversa        |"<< endl;
        cout << "| 3- FizzBuzz                            |"<< endl;
        cout << "| 4- salir                               |"<< endl;
        cout << "|----------------------------------------|" << endl ;
    cin >> resp;

    switch(resp){

        case 1:
                biciesto();
         break;

        case 2:
                tablaInversa();
        break;

        case 3:
                fizzBuzz();
        break;
    }

}while(resp != 4);

cout << "saliendo del programa........" << endl;

return 0;
}

