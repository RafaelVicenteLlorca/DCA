#include <iostream>
#include <math.h>

using namespace std;

void menu()
{
    cout<<"Bienvenido a la calculadora "<<endl;
    cout<< "Introduzca dos numeros y una operacion de las que se mostrara acontinuacion" <<endl ;
    cout << "+ - * / R (raiz del primer numero)" << endl;
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
            
            case "+":
                cout << "el resultado es : " << num1 + num2<<endl;
            case "-":
                cout << "el resultado es : " << num1 - num2<<endl;
            case "*":
                cout << "el resultado es : " << num1 * num2<<endl;
            case "/":
                cout << "el resultado es : " << num1 / num2<<endl;
            case "R":
                cout << "el resultado es : " << sqrt(num1)<<endl;

            default:
                cout << "la operacion introducida no esta implementada o es erronea"<< endl;
            
        }
    


}