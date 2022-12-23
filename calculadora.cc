#include <iostream>
#include <math.h>

using namespace std;

void menu()
{
    cout<<"Bienvenido a la calculadora "<<endl;
    cout<< "Introduzca dos numeros y una operacion de las que se mostrara acontinuacion" <<endl ;
    cout << "" << endl;
    }


int main()
{
    int num1, num2;
    char operacion;
    menu();

    cout << "Introduzca primer numero: ";
    cin >> num1;

    
        cout << "Introduzca siguiente numero: ";
        cin >> num2;
        cout << "Introduzca introduzca operacion: ";
        cin >> operacion;

    
        switch operacion{
            
            default:
                cout << "en construccion"<< endl;
            
        }
    


}