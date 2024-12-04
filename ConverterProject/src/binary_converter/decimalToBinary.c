#include <stdio.h>
#include "../../include/binary_converter/binaryConverter.h"
void binary(int dec){

    int quoziente=dec;
    int risultato[16];
    int i=0;    //ciao io conto quanti numeri è lungo il binario
    int k;     //io stampo al contrario 
    int p;    //io sono un esperimento malriuscito ma bellissimo
    do {                                                    //un pò di matematica:
        risultato[i]=quoziente%2;                          //abbiamo un array che rappresenta il numero binario da riempire no?
        i++;                                              //intanto diciamo che l'array è il resto della divisione 2 del numero in questione
        quoziente/=2;                                    //quindi bisognerà farlo scorrere e poi farci ripetere la cosa ma con lo stessso numero dimezzato
    }while (quoziente>0);                               //il tutto continua fino a consumare il numero
                                                                                                                                                                    //8 a destra e 12 a sinistra
                                                                                                                                                                    /*if(i<12){               
                                                                                                                                                                    for(p=7-(i-12);p>=0;p--,printf("-"));}*/
    printf("--------il-numero-%d-convertito-diventa-",dec);
                                                                                                                                                                    //printf("%d",i);        
    for(k=i-1;k>=0;k--){//bisogna ora stampare al contrario
        printf("%d",risultato[k]);
    }
    for(p=13-i;p>=0;p--,printf("-"));
    printf("\n");
}