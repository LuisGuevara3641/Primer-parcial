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

        //do
        //{
            gotoxy(45, 1);
            cout << "MENU PRINCIPAL #" << i << endl;        
            cout << "1- Suma." << endl;
            cout << "2- Resta." << endl;
            cout << "3- Multiplicacion" << endl;
            cout << "4- Division." << endl;
            cout << "5- Salir del menu." << endl;
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

                if (num2 == 0)
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


            default:
                break;
            }
            system("cls");
        //} while (opc != 4);

        cout << "Fin de operacion";
    }
    return 0;
}

/*************************************************************Funciones*******************************************************************************/
float suma(float num1, float num2)
{
    return num1 + num2;
}

float resta(float num1, float num2)
{
    return num1 - num2;
}

float multiplicacion(float num1, float num2)
{
    return num1 * num2;
}

float division(float num1, float num2)
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

void imprimirResultado(float num)
{
    cout << "El resultado es: " << num << endl;
}
