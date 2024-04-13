#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct {
    int velocidad;//entre 1 y 3 GHz
    int anio;//entre 2015 y 2023
    int cantidad;//entre 1 y 8
    char *tipo_cpu; //valores del arreglo tipos
}typedef compu;

void mostrarCompus(compu compus[4]);
void mostrarPcVieja(compu compus[4]);
void mostrarPcVeloz(compu compus[4]);

int main(){

    char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    compu compus[5]; //b) Define una variable del tipo arreglo de estructura para guardar las características de 5 PC que cargará el usuario.

    srand(time(NULL));

    //Cargar datos de las pcs en el arreglo, datos aleatorios y a partir del arreglo tipos 
    for (int i = 0; i < 5; i++)
    {   
        compus[i].velocidad = rand()%3 + 1;
        compus[i].anio = rand() %9 + 2015; 
        compus[i].cantidad = rand()%8 + 1; 
        compus[i].tipo_cpu = tipos[i];
    }

    //c) Escribe una función que presente la lista de las PC, cada una con sus características.
    mostrarCompus(compus);
    //d) Escribe una función que presente la PC más vieja.
    mostrarPcVieja(compus);
    //e) Escribe una función que presente la PC que tiene mayor velocidad.
    mostrarPcVeloz(compus);

    return 0;
}

void mostrarCompus(compu compus[4]){
    for (int i = 0; i < 5; i++)
    {   
        printf("***Detalles de Computadoras***\n");
        printf("**PC %d**\n", i+1);
        printf("Velocidad: %d GHz\n", compus[i].velocidad);
        printf("Anio de Fabricacion: %d\n", compus[i].anio);
        printf("Cantidad de Nucleos: %d\n", compus[i].cantidad);
        printf("Tipo de CPU: %s\n", compus[i].tipo_cpu);
    }
}


void mostrarPcVieja(compu compus[4]){
    int anio = compus[0].anio;
    int masVieja = 0;

    for (int i = 0; i < 4; i++)
    {
        if (compus[i].anio < anio)
        {
            masVieja = i;
            anio = compus[i].anio;
        }
    }
    printf("\nLa compu mas vieja es la PC: %d\n", masVieja+1);    

    printf("Velocidad: %d GHz\n", compus[masVieja].velocidad);
    printf("Anio de Fabricacion: %d\n", compus[masVieja].anio);
    printf("Cantidad de Nucleos: %d\n", compus[masVieja].cantidad);
    printf("Tipo de CPU: %s\n", compus[masVieja].tipo_cpu);

}

void mostrarPcVeloz(compu compus[4]){
    int velocidad = compus[0].velocidad;
    int masVeloz = 0;

    for (int i = 0; i < 4; i++)
    {
        if (compus[i].velocidad > velocidad)
        {
            masVeloz = i;
            velocidad = compus[i].velocidad;
        }
    }
    printf("\nLa compu con mas velocidad es la PC: %d\n", masVeloz+1);    

    printf("Velocidad: %d GHz\n", compus[masVeloz].velocidad);
    printf("Anio de Fabricacion: %d\n", compus[masVeloz].anio);
    printf("Cantidad de Nucleos: %d\n", compus[masVeloz].cantidad);
    printf("Tipo de CPU: %s\n", compus[masVeloz].tipo_cpu);
}