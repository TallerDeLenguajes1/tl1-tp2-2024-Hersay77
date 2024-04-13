// codigo a completar
#include <stdio.h>
#include <stdlib.h> //se agrega libreria que proporciona funciones como generar numeros aleatorios
#include <time.h> //se agreaga libreria que proporciona funciones relaconadas con el tiempo

#define N 20
int main(){

    int i;
    double vt[N];

    srand(time(NULL)); //se incializa el generador de numero aleatorios

    for(i = 0;i < N; i++)
    {
        vt[i]= 1+rand()%100;
        printf("%f ", vt[i]);
    }

    return 0;
}

