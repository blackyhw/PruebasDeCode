#ifndef ESPECIE_H_INCLUDED
#define ESPECIE_H_INCLUDED
#define DIMANIMALS 30
#include <stdio.h>
#include <stdlib.h>

typedef struct {

	int idEspecie;
	int cantEjemplares; // cantidad de animales de esa especie
	char nombreEspecie[30];
}stEspecie;

int checkId(int id);

#endif // ESPECIE_H_INCLUDED
