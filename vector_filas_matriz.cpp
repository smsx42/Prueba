#include <iostream>

using namespace std;

const int MAX_FILAS = 20;
const int MAX_COLUMNAS = 20;

void completar_vector(int vector[MAX_FILAS], int &tope_vector, int matriz[MAX_FILAS][MAX_COLUMNAS], int tope_fila, int tope_columna){

    int sumatoria_filas = 0;
    
    for(int i = 0; i < tope_fila; i++){
        for(int j = 0; j < tope_columna; j++){
            sumatoria_filas += matriz[i][j];
        }
        vector[i] = sumatoria_filas;
        tope_vector += 1;
        sumatoria_filas = 0;
    }

}

int main(){

    int vector[MAX_FILAS];
    int tope_vector = 0;
    int matriz[MAX_FILAS][MAX_COLUMNAS];
    int tope_fila;
    int tope_columna;

    matriz[0][0] = 1;
    matriz[1][0] = 2;
    matriz[2][0] = 4;
    matriz[0][1] = 5;
    matriz[1][1] = 0;
    matriz[2][1] = 2;
    matriz[0][2] = 1;
    matriz[1][2] = 1;
    matriz[2][2] = 6;

    tope_fila = 3;
    tope_columna = 3;
 
    completar_vector(vector, tope_vector, matriz, tope_fila, tope_columna);

    for(int i = 0; i < tope_fila; i++){
        for(int j = 0; j < tope_columna; j++){
            std::cout << matriz[i][j] << " " ;
        }
        std::cout << endl;
    }

    for(int i = 0; i < tope_vector; i++){
        std::cout << vector[i] << " ";
    }

    std::cout << endl;

    return 0;
}