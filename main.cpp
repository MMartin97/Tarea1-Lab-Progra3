#include "Evaluador.h"
#include <iostream>
using namespace std;

//Devuelve la suma de a (dado) y b (dado)
int sumar(int a, int b)
{

    return a+b;
}

//Devuelve la resta de a (dado) y b (dado)
int restar(int a, int b)
{
    return a-b;
}

//Devuelve la multiplicacion de a (dado) y b (dado)
int multiplicar(int a, int b)
{
    return a*b;
}

//Devuelve la division de a (dado) y b (dado)
int dividir(int a, int b)
{
    return a/b;
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMayor(int a, int b)
{

    return (a>b)? a:b;
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMenor(int a, int b)
{
    return (a>b)? b:a;
}

//Devuelve el numero mayor entre a (dado), b (dado) y c (dado)
int getMayor(int a, int b, int c)
{
    int mayor;
    (a>b)? mayor = a : mayor =b;
    (mayor > c) ? mayor : mayor =c;

    return mayor;
}

//Establece el valor (dado) en el arreglo (dado) en el indice posicion (dado)
void setValor(int arreglo[], int valor, int posicion)
{
    arreglo[posicion] = valor;
}

//Obtiene y devuelve el valor del arreglo (dado) en el indice posicion (dado)
int getValor(int arreglo[], int posicion)
{
    int valor = arreglo[posicion];
    return valor;
}

//Devuelve el numero mayor del arreglo (dado) que contiene tamano (dado) elementos
int getMayor(int arreglo[], int tamano)
{
    int mayor =0;
    for(int i =0; i<tamano ; i++)
    {
        int num = arreglo[i];
        if(mayor < num)
        {
           mayor=num;
        }
    }

    return mayor;
}

//Devuelve el numero menor del arreglo (dado) que contiene tamano (dado) elementos
int getMenor(int arreglo[], int tamano)
{
      int menor = 455555555;
    for(int i =0; i<tamano ; i++)
    {
        int num = arreglo[i];
        if(menor > num)
        {
           menor = num;
        }
    }

    return menor;

}

//Devuelve el promedio de los numeros del arreglo (dado) que contiene tamano (dado) elementos
int getPromedio(int arreglo[], int tamano)
{

    double resultado = 0;
    int cantidad= 0;
    for(int i=0; i<tamano; i++)
    {
    resultado += arreglo[i];
    cantidad++;
    }
    resultado = (resultado / cantidad);
    return resultado;
    }

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
