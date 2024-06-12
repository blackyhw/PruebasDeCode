#include "Animal.h"
int loadArrayAnimals(stAnimal*arr,int val){
    char option = NULL;
    int aux = 0;

    while(option != 27 && val<DIMANIMALS){
        int flag = 0;

        printf("Seleccione el nro de identificacion del animal: \n");
        scanf("%d",&arr[val].nro_identificacion);

       while(flag == 0){
        printf("Seleccione un id del animal: ");
        scanf("%d",&aux);

        if(checkId(aux)!= 0){
           arr[val].idEspecie = aux;
           flag = 1;
        }else{
            printf("Id ingresado incorrecto, intente nuevamente: \n");
        }

       }

        printf("Seleccione el nombre del animal: \n");
        fflush(stdin);
        gets(arr[val].nombreAnimal);

        printf("Seleccione la poblacion: \n");
        scanf("%d",&arr[val].poblacion);

        val++;

        printf("Desea seguir cargando? Pulse ESC para salir: \n");
        fflush(stdin);
        option = getch();
    }
    return val;
}

void muestraPorRecursiva(stAnimal *listAn,int i,int val){
    if(i<val){
        printf("-------------------------------\n");
        printf("nro de identificacion: %d\n",listAn[i].nro_identificacion);
        printf("nro de idEspecie: %d\n",listAn[i].idEspecie);
        printf("nombre del animal: %s\n",listAn[i].nombreAnimal);
        printf("Cantidad de poblacion: %d\n",listAn[i].poblacion);
        printf("-------------------------------\n");
        muestraPorRecursiva(listAn,i+1,val);
    }
}
void arregloToArchivo(stAnimal *listAn,int val,char*nombreArchivo){
    stAnimal aux[val];
    int i = 0;
    while(i<val){
        if(listAn[i].poblacion>100){
           aux[i] = listAn[i];
        }
        i++;
    }
    FILE*archi = fopen(nombreArchivo,"wb");
    if(archi){
        fwrite(aux,sizeof(stAnimal),val,archi);
        fclose(archi);
    }
}
void searchId(char*nombreArchivo,int id){
    stAnimal aux;
    int i = 0;
    FILE*archi = fopen(nombreArchivo,"rb");
    if(archi){
        while((fread(&aux,sizeof(stAnimal),1,archi)> 0)){
              if(aux.nro_identificacion == id){
                printf("Nro de identificacion: %d\n",aux.nro_identificacion);
                printf("Id Especie: %d\n",aux.idEspecie);
                printf("Nombre del animal: %s\n",aux.nombreAnimal);
                printf("Nro de poblacion: %d\n",aux.poblacion);
              }
        }

    }

}
