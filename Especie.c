#include "Especie.h"
int checkId(int id){
    int idStatus = 0;

    stEspecie aux;
    FILE*archi=fopen("especies.dat","rb");

    if(archi){
        while(fread(&aux,sizeof(stEspecie),1,archi)>0){
            if(aux.idEspecie == id){
                idStatus = 1;
            }
        }
        fclose(archi);
    }
    return idStatus;
}
