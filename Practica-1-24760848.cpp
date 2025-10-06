#include <iostream>
using namespace std;

int main(){
//variable para decidir el numero de datos que tendra la matriz en este caso 4x4
int matriz[4][4];
//esta para en que numero comenzara
int Contador = 1;
//ciclo para recorrer las filas de la matriz
for(int i = 0; i < 4; i++){
    //esta otra parte para las columnas
    for (int j = 0; j < 4; j++)
    {
        matriz[i][j] = Contador;
        Contador++;
        cout << matriz[i][j] << " ";
    }
    cout << endl;
} 
return 0;
}