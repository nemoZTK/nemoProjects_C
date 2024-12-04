#include "../../include/binary_converter/binaryConverter.h"
#include <math.h>
int decimal(int bin){
    int ris=0;                  //è il decimale
    int marck,i=0;             //mark è un remainder mentre i serve per la potenza
    while(bin>0){
        marck=bin%10;
        if(marck==0||marck==1){
            ris= ris + marck *pow(2,i);
            bin/=10;
            i++;
        }else{return 0;}

    }
    return ris;
}
/*
                                                      int bum;
                                                  // main portatile per il test decommenta e salva .c per usare
                                                    int main (void){printf("dammi ");scanf("%d",&bum);printf("%d",decimale(bum));}
*/                                                    