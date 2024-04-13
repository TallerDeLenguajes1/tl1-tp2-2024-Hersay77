#include <stdio.h>
#include <stdlib.h> //se agrega libreria que proporciona funciones como generar numeros aleatorios
#include <time.h> //se agreaga libreria que proporciona funciones relaconadas con el tiempo
#define N 5
#define M 7

int main(){

    int i,j;
    int mt[N][M];
    int *ptr = &mt[0][0]; //creo un puntero al primer eleento de la matriZ

    srand(time(NULL)); //se incializa el generador de numero aleatorios

    for(i = 0;i<N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            *(ptr+i*M+j)=1+rand()%100; //trabajo con artimetica de punteros, i*M+j desplaza la direccion del puntero uno por uno para unarreglo bidimensional
            printf("%d ", *(ptr+i*M+j)); //trabajo con aritmetica de punteros para un arreglo bidimensional
        }
        printf("\n");
    }

    return 0;
}

