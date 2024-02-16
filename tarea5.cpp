#include <iostream>
#include <windows.h>
#include <cctype>
#include <cstdlib>
#include <ctime>
#include <cmath> 
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
void suma_par(int num1);
void suma_impar(int num1);
void factorial(int num1);
void contador_digitos(int num1);
void ordenamiento_numeros(int num1, int num2, int num3);
void suma_digitos_numero(int num1);
int main()
{
    int opc;
    srand(time(NULL));

    do
    {
        gotoxy(45, 1);
        cout << "MENU PRINCIPAL" << endl;
        cout << "1- Suma de numeros pares e impares." << endl;
        cout << "2- Factorial con bucle while." << endl;
        cout << "3- Contador de digitos." << endl;
        cout << "4- Ordenamiento de numeros (Ascendente)." << endl;
        cout << "5- Suma de digitos de numeros." << endl;
        cout << "6- Salir del menu." << endl;
        cout << "Opcion: ";
        cin >> opc;

        switch (opc)
        {
        case 1: // suma de numeros pares o impares
        {
            char continuar;

            do
            {
                system("cls");
                int num1;
                char decision;

                cout << "Ingrese su numero: ";
                cin >> num1;
            
                cout << "Desea que se sumen por pares o impares? (P/I) ";
                cin >> decision;

                decision = toupper(decision); // Sube a mayusculas la letra.

                if (decision == 'P')
                {
                    suma_par(num1);
                }
                else
                {
                    suma_impar(num1);
                }
                cout << endl;

                cout << "Desea ejecutarlo nuevamente? (s/n): ";
                cin >> continuar;

            } while (continuar == 's' || continuar == 'S');

            system("pause");
            cout << endl;
            break;
        }

        case 2: //  factorial
		{
			char continuar;

			do
			{
				system("cls");
				int num1;

				cout << "Ingrese su numero: ";
				cin >> num1;

				factorial(num1);
				cout << endl;

				cout << "Desea ejecutarlo nuevamente? (s/n): ";
				cin >> continuar;

			} while (continuar == 's' || continuar == 'S');

			system("pause");
			cout << endl;
			break;
		}

        case 3: // contador de digitos
		{
			char continuar;

			do
			{
				system("cls");
				
                int num1;

                cout << "Ingrese su numero: ";
                cin >> num1;


                if ( num1 == 0)
                {
                    cout << "Su numero tiene 1 digito";
                }
                else{
                    contador_digitos(num1);
                }

                
                cout << endl;

				cout << "Desea ejecutarlo nuevamente? (s/n): ";
				cin >> continuar;

			} while (continuar == 's' || continuar == 'S');

			system("pause");
			cout << endl;
			break;
		}

        case 4: // ordenar numeros de manera ascendente
		{
			char continuar;

			do
			{
				system("cls");
				
                int num1, num2, num3;

                cout << "Ingrese su primer numero: ";
                cin >> num1;

                cout << "Ingrese su segundo numero: ";
                cin >> num2;

                cout << "Ingrese su tercero numero: ";
                cin >> num3;


                ordenamiento_numeros(num1, num2, num3);

                
                cout << endl;

				cout << "Desea ejecutarlo nuevamente? (s/n): ";
				cin >> continuar;

			} while (continuar == 's' || continuar == 'S');

			system("pause");
			cout << endl;
			break;
		}
        
        case 5: // sumar los digitos de un numero
		{
			char continuar;

			do
			{
				system("cls");
				int num1;

				cout << "Ingrese su numero: ";
				cin >> num1;
				
				suma_digitos_numero(num1);
				
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
	} while (opc != 6);

    cout << "Fuera del programa";
    return 0;
}

/*************************************************************Funciones*******************************************************************************/
void suma_par(int num1) // suma los numeros pares que contiene el numero
{
    int contador = 0;
    for (int i=1; i <= num1; i++)
    {
        if (i % 2 == 0) 
        {
            cout << i << " - ";

            contador = contador+i;
        }
    }

    cout << endl << "La suma total es: " <<  contador << endl;
}

void suma_impar(int num1) // suma los numeros impares que contiene el numero
{
    int contador = 0;
    for (int i=1; i <= num1; i++)
    {
        if (i % 2 != 0) 
        {
            cout << i << " - ";

            contador = contador+i;
        }
    }

    cout << endl << "La suma total es: " <<  contador << endl;
}

void factorial(int num1) // encuentra el facrtorial  de un numero
{
    int resultado = 1;
    for (int i=1; i <= num1; i++)
    {
        resultado *= i;
    }

    cout << "El factorial de su numero es: " << resultado << endl;
}

void contador_digitos(int num1) // Encuentra los digitos que tiene un numero
{
    int contador = 0;
    do
    {
        num1 = num1 / 10;
        contador++;
    }
    while(num1 != 0);
    
    cout << "Numero de digitos en el numero: " << contador << endl;
}

void ordenamiento_numeros(int a, int b, int c) // ordena los numeros de menor a mayor
{
    if (a <= b and b <= c)
		cout << "El orden de los numeros es: " << a << ", " << b << ", " << c <<  endl; 
	else if (a <= c and c <= b)
		cout << "El orden de los numeros es: " << a << ", " << c << ", " << b <<  endl;
	else if (b <= a and a <= c)
		cout << "El orden de los numeros es: " << b << ", " << a << ", " << c <<  endl;
	else if (b <= c and c <= a)
		cout << "El orden de los numeros es: " << b << ", " << c << ", " << a <<  endl;
	else if (c <= a and a <= b) 
		cout << "El orden de los numeros es: " << c << ", " << a << ", " << b <<  endl;
	else if (c <= b and b <= a)
		cout << "El orden de los numeros es: " << c << ", " << b << ", " << a <<  endl;
}

void suma_digitos_numero(int num1) // sumar los digitos de un numero
{
    int resultado = 0;
    
    do {
        resultado += num1 % 10; 
        num1 /= 10;
    } 
    while(num1 != 0);

    cout << "La suma de los digitos del numero es: " << resultado << endl;
    
}