#include <iostream>
using namespace std;
float num1, num2, resultado;
float suma(float a, float b); // Declaracion de las funciones
float resta(float a, float b);
float multiplicacion(float a, float b);
float division(float a, float b);
int main()
{
    cout << "ingrese su primer numero: " << endl;
    cin >> num1;

    cout << "ingrese su segundo numero: " << endl;
    cin >> num2;

    
    cout << "La suma es: " << suma(num1, num2) << endl;
    cout << "La resta es: " << resta(num1, num2) << endl;
    cout << "La multiplicacion es: " << multiplicacion(num1, num2) << endl;
    cout << "La division es: " << division(num1, num2) <<endl;
    
    system("pause");
    return 0;
}

float suma(float a, float b) //  Definicion de la funcion Suma
{
    resultado = a + b;
    return resultado;
}   

float resta(float a, float b) //  Definicion de la función Resta
{
    resultado = a - b;
    return resultado;
}

float multiplicacion(float a, float b) // Definicion de la Funcion Multiplicacion
{
    resultado = a * b;
    return resultado;
}

float division(float a, float b) // Definicion de la Funcion Division
{
    if (b == 0)
    {
        cout << "(No se puede dividir por 0)";
    }
    else
    {
        resultado = a / b;
        return resultado;
    }
}
