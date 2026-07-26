#include <stdio.h>
void completarMatrices(float matriz[2][3], int a);

void sumaMatriz (float a[2][3], float b[2][3], float resultado[2][3]);
void multiplicacionMatriz(float a[2][3], float b[2][3], float resultado[2][3]);
void restaMatriz(float a[2][3], float b[2][3], float resultado[2][3]);
void divisionMatriz(float a[2][3], float b[2][3], float resultado[2][3]);

void mostrarResultado (float matriz[2][3], const char *a);

int main(){
    float m1[2][3]; 
    float m2[2][3];
    float resultado[2][3];
    completarMatrices(m1, 1);
    completarMatrices(m2, 2);
    sumaMatriz(m1, m2, resultado);
    mostrarResultado(resultado, "suma");
    restaMatriz(m1, m2, resultado);
    mostrarResultado(resultado, "resta");
    multiplicacionMatriz(m1, m2, resultado);
    mostrarResultado(resultado, "multiplicacion");
    divisionMatriz(m1, m2, resultado);
    mostrarResultado(resultado, "division");

    return 0;
}
void completarMatrices(float matriz[2][3], int a){
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("Escriba el valor en la matriz %i para [%i][%i] \n", a, i, j  );
            scanf("%f", &matriz[i][j]);
        }
    }
    printf("\n");
}

void sumaMatriz(float a[2][3], float b[2][3], float resultado[2][3]) {
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            resultado[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\n");
}

void multiplicacionMatriz(float a[2][3], float b[2][3], float resultado[2][3]) {
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            resultado[i][j] = a[i][j] * b[i][j];
        }
    }
}

void restaMatriz(float a[2][3], float b[2][3], float resultado[2][3]) {
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            resultado[i][j] = a[i][j] - b[i][j];
        }
    }
}

void divisionMatriz(float a[2][3], float b[2][3], float resultado[2][3]) {
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            resultado[i][j] = a[i][j] / b[i][j];
        }
    }
}

void mostrarResultado(float matriz[2][3], const char *a) {
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("la %s en la ubicacion [%i][%i] es: %.2f \n", a, i, j, matriz[i][j]);
        }
    }
    printf("\n");
}


