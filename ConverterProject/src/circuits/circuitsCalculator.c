#include "../../include/circuits/circuits.h"
#include <stdio.h>
#include <stdlib.h>

/*---------------------------------CALCOLO RESISTENZE SERIE PARALLELO----------------------------------------------------------------------------*/
float calcoloResistenze(int num,char tipo,float *array){
                float returnValue;
                int i;
                if (tipo=='s'||tipo=='S'){
                    returnValue=0;		
                    for (i = 0; i < num; i++)
                        {returnValue += array[i];}
                }
                else if (tipo=='P'||tipo=='p'){
                    returnValue=0;
                    for (i = 0; i < num; i++)
                        {returnValue += (1 / array[i]);}
                    returnValue = 1 / returnValue;
                }
                else{return -1;}

return returnValue;
}
/*--------------------------------------------------------RESISTENZA MAIN---------------------------------------------------------------------------------- */
void resistenzaMain(){
    int num;
    char tipo;
    printf("Inserisci il numero di resistenze: ");
    scanf("%d", &num);
    printf("Per resistenze in parallelo, scrivi P o p\n"
           "Per resistenze in serie, scrivi S o s\n");
    scanf(" %c", &tipo);                                       
    float *array = malloc(num * sizeof(float));        
    if (array == NULL) {                              
        printf("Errore nell'allocazione dell'array.\n");
        exit(1); 
    }
    for (int i = 0; i < num; i++) {
        printf("Inserisci il valore della resistenza R%d in ohm: ", i + 1);
        scanf("%f", &array[i]);
    }
    float risultato = calcoloResistenze(num, tipo, array);
    if (risultato == -1) {printf("Tipo di connessione non valido.\n");}

    else {printf("Resistenza equivalente: %.2f ohm\n", risultato);}
    free(array);
}
/*-----------------------------------leggi di ohm-------------------------------------------------------------------------------*/

double tensioneOhm(double corrente, double resistenza) {
    return corrente * resistenza;
}

double correnteOhm(double tensione, double resistenza) {
    return tensione / resistenza;
}
double resistenzaOhm(double tensione, double corrente) {
    return tensione / corrente;
}
/*----------------------------------------------------FUNZIONI ALTERNATIVE----------------------------------------------------------------------------*/
/*double resistenzaInSerie(double R1, double R2);
double resistenzaParallelo(double R1, double R2);

double resistenzaParallelo(double R1, double R2) {
    return 1.0 / ((1.0 / R1) + (1.0 / R2));
}

double resistenzaInSerie(double R1, double R2) {
    return R1 + R2;
}*/
