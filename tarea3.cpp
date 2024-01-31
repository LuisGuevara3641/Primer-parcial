#include <iostream>
#include <windows.h>
#include <cmath> //  para la función pow() 
using namespace std;
void gotoxy(int x, int y)
{
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon, dwPos);
}
void operacionesAritmeticas(int num1,int num2);
void esBisiesto(int anio);
void calcularPotencia(int base, int exponente);
bool esPrimo(int num);
int main()
{
    int opc;
    srand(time(NULL));

    do
    {
        gotoxy(45, 1);
        cout << "MENU PRINCIPAL" << endl;
        cout << "1- Programa que realiza operaciones aritmeticas." << endl;
        cout << "2- Programa que calcula una potencia." << endl;
        cout << "3- Programa que determina si es numero primo" << endl;
        cout << "4- Programa que verifica si es anio bisiesto." << endl;
        cout << "5- Salir del menu." << endl;
        cout << "Opcion: ";
        cin >> opc;

        switch (opc)
        {
        case 1:
        {
            char continuar;

            do
            {
                system("cls");
                int num1, num2;

                cout << "Ingrese su primer numero: ";
                cin >> num1;
            
                cout << "Ingrese su segundo numero: ";
                cin >> num2;


                operacionesAritmeticas(num1, num2);
                cout << endl;

                cout << "Desea ejecutarlo nuevamente? (s/n): ";
                cin >> continuar;

            } while (continuar == 's' || continuar == 'S');

            system("pause");
            cout << endl;
            break;
        }

        case 2:
		{
			char continuar;

			do
			{
				system("cls");
				int base, exponente;

				cout << "Ingrese la base de su numero: ";
				cin >> base;

                cout << "Ingrese el exponente de su numero: ";
				cin >> exponente;

				calcularPotencia(base, exponente);
				cout << endl;

				cout << "Desea ejecutarlo nuevamente? (s/n): ";
				cin >> continuar;

			} while (continuar == 's' || continuar == 'S');

			system("pause");
			cout << endl;
			break;
		}

        case 3:
		{
			char continuar;

			do
			{
				system("cls");
				int num1;

				cout << "Ingrese su numero: " << endl;
				cin >> num1;

                if (esPrimo(num1))
                {
                    cout << "El numero es primo." << endl;
                }
                else
                {
                    cout << "El numero no es primo." << endl;
                }
                cout << endl;

				cout << "Desea ejecutarlo nuevamente? (s/n): ";
				cin >> continuar;

			} while (continuar == 's' || continuar == 'S');

			system("pause");
			cout << endl;
			break;
		}

        case 4:
		{
			char continuar;

			do
			{
				system("cls");
				int anio;

				cout << "Ingrese el anio que quiere comprobar: ";
				cin >> anio;

				esBisiesto(anio);
				cout << endl;

				cout << "Desea ejecutarlo nuevamente? (s/n): ";
				cin >> continuar;

			} while (continuar == 's' || continuar == 'S');

			system("pause");
			cout << endl;
			break;
		}
    
        default:
			break;
		}
        system("cls");
	} while (opc != 5);

    cout << "Fuera del programa";
    return 0;
}

/*************************************************************Funciones*******************************************************************************/
void operacionesAritmeticas(int num1,int num2)
{
    float resultadoSum, resultadoRes, resultadoDiv, resultadoMul;
        
        resultadoSum = num1 + num2; // El resultado de todos los números
        resultadoRes = num1 - num2;
        resultadoMul = num1 * num2;
        resultadoDiv = num1 / num2;

    cout << "La suma es: " << resultadoSum << endl;    
    cout << "La resta es: " << resultadoRes << endl;    
    cout << "La multiplicacion es: " << resultadoMul << endl;    
    cout << "La division es: " << resultadoDiv << endl;   

    if (num1 == num2)
    {
        cout << "Los numeros son iguales" << endl;
    }
    else
    {
        cout << "Los numeros no son iguales" << endl; 
    }

}

void calcularPotencia(int base, int exponente)
{
    float resultado;

    if (exponente == 0)
    {
        resultado = 1;
        cout << "El resultado de la potencia es: " << resultado << endl; // Para el caso en que el exponente sea cero.
    }
    else
    {
        resultado = pow(base, exponente); 
        cout << "El resultado de la potencia es: " << resultado << endl; // Imprimir el resultado en pantalla
    }
    

}

bool esPrimo(int num)
{
    if (num <= 1) {
        return false; //  El numero debe ser mayor a 1 para ser considerado primo.
    }

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false; // El número es divisible por otro número, por lo tanto, no es primo
        }
    }

    return true; // El número es primo
}

void esBisiesto(int anio)
{
    if (anio % 4 != 0)
    {
        cout << anio << " No es anio bisiesto" << endl; //  Si el año no es divisble entre 4, no puede ser bisiesto
    }
    else {
        cout << anio << " Es anio bisiesto" << endl; // Si el año es divisible entre 4, es bisiesto
    }
}
