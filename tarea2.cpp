#include <iostream>
#include <windows.h>
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
void verificaPar(int num);
void verificaAnioBisiesto(int anio);
void verificaIgualdad(int num1, int num2);
void verificaMayorEdad(int edad);
void evaluaAprobacionExamen(int calificacion);
int main()
{
    int opc;
    srand(time(NULL));

    do
    {
        gotoxy(45, 1);
        cout << "MENU PRINCIPAL" << endl;
        cout << "1- Programa que verifica si un numero ingresado por el usuario es par." << endl;
        cout << "2- Programa que determina si un anio ingresado es bisiesto o no." << endl;
        cout << "3- Programa que solicita al usuario dos numeros y determina si son iguales." << endl;
        cout << "4- Programa que pida al usuario su edad y verifique si es mayor de edad." << endl;
        cout << "5- Programa que evalue si un estudiante aprobo un examen, considerando que la calificacion de aprobacion es 60 o mas." << endl;
        cout << "6- Salir del menu." << endl;
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
                int num;

                cout << "Ingrese el numero que quiere verificar: ";
                cin >> num;

                cout << "El numero es ";
                verificaPar(num);
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
				int anio;

				cout << "Ingrese el anio que quiere comprobar: ";
				cin >> anio;

				verificaAnioBisiesto(anio);
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

				cout << "Ingrese el primer numero: " << endl;
				cin >> num1;

                cout << "Ingrese el segundo numero: " << endl;
				cin >> num2;

				verificaIgualdad(num1, num2);
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
				int edad;

				cout << "Ingrese su edad: ";
				cin >> edad;

				verificaMayorEdad(edad);
                cout << endl;

				cout << "Desea ejecutarlo nuevamente? (s/n): ";
				cin >> continuar;

			} while (continuar == 's' || continuar == 'S');

			system("pause");
			cout << endl;
			break;
		}
        
        case 5:
		{
			char continuar;

			do
			{
				system("cls");
				int calificacion;

				cout << "Ingrese su calificacion: ";
				cin >> calificacion;

				evaluaAprobacionExamen(calificacion);
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
void verificaPar(int num)
{
        if (num % 2 != 0)
        {
            cout << "impar" << endl;
        }      
        else {
            cout << "par" << endl;
        }  
}

void verificaAnioBisiesto(int anio)
{
    if (anio % 4 != 0)
    {
        cout << anio << " No es anio bisiesto" << endl;
    }
    else {
        cout << anio << " Es anio bisiesto" << endl;
    }
}

void verificaIgualdad(int num1, int num2)
{
    if (num1 != num2)
    {
        cout << "Los numeros no son iguales." << endl;
    }
    else {
        cout << "Los numeros son iguales." << endl;
    }
}

void verificaMayorEdad(int edad)
{
    if (edad >= 18)
    {
        cout << "Usted es mayor de edad" << endl;
    }
    else {
        cout << "Usted es menor de edad" << endl;
    }
}

void evaluaAprobacionExamen(int calificacion)
{
    if (calificacion == 100)
    {
        cout << "Usted ha aprobado la clase con nota perfecta" << endl;
    }
    else if (calificacion >= 80)
    {
        cout << "Usted ha aprobado la clase con una nota excelente" << endl;
    }
    else if (calificacion >= 60)
    {
        cout << "Usted ha aprobado la clase" << endl;
    }
    else 
    {
        cout << "Usted ha reprobado la clase" << endl;
    }  
}