#include <stdio.h>
#include <stdlib.h>
#include "Animal.h"
#define DIMANIMALS 30
#include <conio.h>
int main()
{
    int aux = 0;
   stAnimal listAnimals[DIMANIMALS];
   int vAnimals = 0;

    //vAnimals = loadArrayAnimals(listAnimals,vAnimals);
    //muestraPorRecursiva(listAnimals,0,vAnimals);
    //arregloToArchivo(listAnimals,vAnimals,"animales.dat");

    printf("Seleccione id a buscar: ");
    scanf("%d",&aux);
    searchId("animales.dat",aux);


    return 0;
}
