#include<iostream>

using namespace std;

void ordenamientoBurbuja(){
    //Complejidad Costante O(1)                                                                 Se ejecuta una unica vez,
    int numeros[] = {3, 7, 4, 2, 5, 8, 9};  //O(1)
    int aux;                                                               //O(1)
    int i;                                                                 //O(1)
    int j;                                                                 //O(1)

    //ALGORITMO DE ORDENAMIENTO
    //Complejidad Lineal O(n)
    for ( i = 0; i < 7; i++) {                                  //O(n)
        //Complejidad Cuadratica n*n = O(n^2)                                            Sus iteraciones son N veces al cuadrado.
        for ( j = 0; j < 7; j++) {                              //O(n^2)
            if (numeros[j] > numeros[j + 1]) {                  //O(n^2)
                aux = numeros[j];                               //O(n^2)
                numeros[j] = numeros[j + 1];                    //O(n^2)
                numeros[j + 1] = aux;                           //O(n^2)
            }
        }
    }
    cout << "Orden Ascendente: ";
    //Complejidad Lineal O(n)  A medida que se Ejecuta sus iteraciones son n veces
    for ( i = 0; i < 7; i++) {                              //O(n)
        cout << numeros[i] <<" ";                           //O(n)
    }

    cout<<"\nOrden Descendente: ";
    //Complejididad Lineal O(n)
    for (i = 6; i>=0; i--) {                                //O(n)
        cout<<numeros[i] <<" ";                             //O(n)
    }
}
int main() {
   ordenamientoBurbuja();                                   //O(1)
    return 0;
}




