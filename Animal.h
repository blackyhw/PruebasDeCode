#ifndef ANIMAL_H_INCLUDED
#define ANIMAL_H_INCLUDED
#define DIMANIMALS 30
#include "Especie.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
int nro_identificacion;
int idEspecie;
char nombreAnimal[30];
int poblacion;    // cantidad de animales
} stAnimal;

int loadArrayAnimals(stAnimal*arr,int val);
void muestraPorRecursiva(stAnimal *listAn,int i,int val);
void arregloToArchivo(stAnimal *listAn,int val,char*nombreArchivo);
void searchId(char*nombreArchivo,int id);
#endif // ANIMAL_H_INCLUDED
