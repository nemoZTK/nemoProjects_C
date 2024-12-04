#include "../include/binary_converter/binaryConverter.h"
#include "../include/roman_converter/romanConverter.h"
#include "../include/circuits/circuits.h"
#include "../include/utils/confirm.h"
#include "../include/utils/rickRoll.h"
#include <stdio.h>


void printMainMenu() {
    printf("-------------<Benvenuto nel programma>--------------\n"
           "----<Premi 1 per convertitore di numeri romani>-----\n"
           "----<Premi 2 per convertitore di numeri binari>-----\n"
           "--------<Premi 3 per calcoli sui circuiti>----------\n"
           "-------<Premi 0 per terminare il programma>---------\n");
}

int main() {
   int sceltaM = -1;
                                                                                                                                                                                                                                                                        
    do {
        printMainMenu();
        scanf("%d", &sceltaM);
        switch (sceltaM) {
            case 1:
                if(confirmChoise("\n\n-------hai scelto il convertitore di numeri romani, confermi?------\n\n")==1){
                    launchRomeMenu();
                }
                break;
            case 2:
                if(confirmChoise("\n\n-------hai scelto il convertitore di numeri binari confermi?-------\n\n")==1){
                    lanuchBinaryMenu();
                }
                break;
            case 3:
                if(confirmChoise("\n\n-------hai scelto calcoli sui circuiti di confermi?----------------\n\n")==1){
                    launchCircuitsMenu();
                }
                break;

            case 1312:
                printf("\n\n\n\t\t TRUCCO ATTIVATO \n\n\n");
                rickRoll();

                break;
            case 0:
                printf("\n\n\nalla prossima\n\n\n");
                break;
            default:
                printf("Scelta non valida, riprova.\n");
                break;
        }
    } while (sceltaM != 0);

    return 0;
}
