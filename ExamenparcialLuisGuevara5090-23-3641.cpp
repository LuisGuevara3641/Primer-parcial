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
void numeroPrimo(int num1);
float raizCuadrada(float num1);
void operacionesAritmeticas(int num1,int num2);
void sumaenteros(int num1);
int main()
{
    int opc;
    srand(time(NULL));

    do
    {
        gotoxy(45, 1);
        cout << "MENU PRINCIPAL" << endl;
        cout << "1- Determinar si un numero ingresado por el usuario es primo o no." << endl;
        cout << "2- Raiz cuadrada de un numero." << endl;
        cout << "3- Programa que realiza operaciones aritmeticas." << endl;
        cout << "4- la suma de todos los numeros enteros desde 1 hasta n." << endl;
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
                int numero;

                cout << "Ingrese un numero para saber si es primo o no: ";
                cin >> numero;

                numeroPrimo(numero);

                cout << "\nDesea ejecutarlo nuevamente? (s/n): ";
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
                int num1;
                float resultado;

                cout << "Ingrese su numero: ";
                cin >> num1;

                resultado = raizCuadrada(num1);
                cout << "La raiz cuadra de su numero es: " << resultado << endl;

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

        case 4: 
        {
            char continuar;

            do
            {
                system("cls");
                int num1;

                cout << "Ingrese su numero: ";
                cin >> num1;

                sumaenteros(num1);

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
void numeroPrimo(int num1)
{

    if (num1 <= 1)
    {
        cout << "El numero no es primo" << endl;
    }
    else
    {
        float limite = sqrt(num1);

        bool esPrimo = true; // asumimos que es verdadero

        for (int divisor = 2; divisor <= limite; divisor++)
        {
            if (num1 % divisor == 0)
            {
                esPrimo = false;
                break;
            }
        }
        if (esPrimo)
        {
            cout << "El numero es primo" << endl;
        }
        else
        {
            cout << "El numero no es primo" << endl;
        }
    }
}

float raizCuadrada(float num1)
{
    return sqrt(num1);
}

void operacionesAritmeticas(int num1,int num2)
{
    float resultadoSum, resultadoRes, resultadoDiv, resultadoMul;
        
        resultadoSum = num1 + num2; // El resultado de todos los números
        resultadoRes = num1 - num2;
        resultadoMul = num1 * num2;

    cout << "La suma es: " << resultadoSum << endl;    
    cout << "La resta es: " << resultadoRes << endl;    
    cout << "La multiplicacion es: " << resultadoMul << endl;

    if (num2 == 0)
    {
        cout << "La division es: (No se puede dividir por 0)" << endl;
    }    
    else 
    {
        resultadoDiv = num1 / num2;
        cout << "La division es: " << resultadoDiv << endl; //  La división no da decimales, ya que, se solicitaron numeros enteros (lo ideal hubiese sido, que los dos números ingresados fuera float, pero las instrucciones pedian enteros).
    }

}

void sumaenteros(int num1)
{
    int resultado = 0;
    for(int i=0; i<=num1; i++)
    {
        resultado += i;

        cout << i << " ";
    }

    cout << "\nLa suma de todos los numeros entero del 0 a " << num1 << " es: " << resultado << endl;
}