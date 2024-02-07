#include <iostream> 
#include <windows.h>
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
float suma(float num1, float num2);
float resta(float num1, float num2);
float multiplicacion(float num1, float num2);
float division(float num1, float num2);
int residuo(int num1, int num2);
void imprimirResultado(float num);
int main()
{
    int cantidad;
    float num1, num2;

    system("cls");
    cout << "Cuantas operaciones va a realiza de suma, resta, multiplicacion o division:" << endl;
    cin >> cantidad;
    
    for (int i=1; i <= cantidad; i++)
    {
        system("cls");
        int opc;
        srand(time(NULL)); 

            gotoxy(45, 1);
            cout << "MENU PRINCIPAL #" << i << endl; // Se muestran las opciones al usuario 
            cout << "1- Suma." << endl;
            cout << "2- Resta." << endl;
            cout << "3- Multiplicacion" << endl;
            cout << "4- Division." << endl;
            cout << "5- Residuo." << endl;
            cout << "6- Salir del menu." << endl;
            cout << "Opcion: ";
            cin >> opc;

            switch (opc)
            {
            case 1:
            {
                system("cls");
                float num1, num2;

                cout << "Ingrese su primer numero: ";
                cin >> num1;

                cout << "Ingrese su segundo numero: ";
                cin >> num2;
                
                imprimirResultado(suma(num1, num2));
                cout << endl;
                system("pause");
                break;
            }

            case 2:
            {
                system("cls");
                float num1, num2;

                cout << "Ingrese su primer numero: ";
                cin >> num1;

                cout << "Ingrese su segundo numero: ";
                cin >> num2;

                imprimirResultado(resta(num1, num2));
                cout << endl;
                system("pause");
                break;
            }

            case 3:
            {
                system("cls");
                float num1, num2;

                cout << "Ingrese su primer numero: ";
                cin >> num1;

                cout << "Ingrese su segundo numero: ";
                cin >> num2;

                imprimirResultado(multiplicacion(num1, num2));
                cout << endl;
                system("pause");
                break;
            }

            case 4:
            {
                system("cls");
                float num1, num2;

                cout << "Ingrese su primer numero: ";
                cin >> num1;

                cout << "Ingrese su segundo numero: ";
                cin >> num2;

                if (num2 == 0) // Para evitar division por cero
                {
                    division(num1, num2);
                }
                else
                {
                    imprimirResultado(division(num1, num2));
                }
                cout << endl;
                system("pause");
                break;
            }

            case 5:
            {
                system("cls");
                int num1, num2;

                cout << "Ingrese su primer numero: ";
                cin >> num1;

                cout << "Ingrese su segundo numero: ";
                cin >> num2;

                if (num2 == 0) // Para evitar errores de división por cero
                {
                    residuo(num1, num2); 
                } 
                else
                {
                    imprimirResultado(residuo(num1, num2));
                }
                cout << endl;
                system("pause");
                break;
            }

            default:
                break;
            }
            system("cls");

        cout << "Fin de operacion";
    }
    return 0;
}

/*************************************************************Funciones*******************************************************************************/
float suma(float num1, float num2) // Suma
{
    return num1 + num2;
}

float resta(float num1, float num2) // Resta
{
    return num1 - num2;
}

float multiplicacion(float num1, float num2) // Multiplicacion
{
    return num1 * num2;
}

float division(float num1, float num2) // Divison
{
    if (num2 == 0)
    {
        cout << "No se puede dividir entre cero." << endl;
        return 0;
    }
    else
    {
        return num1 / num2;
    }
}

int residuo(int num1, int num2) // Residuo
{
    if (num2 == 0)
    {
        cout << "No se puede dividir entre cero." << endl;
        return 0;
    }
    else
    {
        return num1 % num2;
    }
}

void imprimirResultado(float num) // Imprimir el resultado
{
    cout << "El resultado es: " << num << endl;
}
