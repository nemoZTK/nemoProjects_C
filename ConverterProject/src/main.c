#include "../include/binary_converter/binaryConverter.h"
#include "../include/roman_converter/romanConverter.h"
#include "../include/circuits/circuits.h"
#include "../include/utils/confirm.h"
#include "../include/utils/rickRoll.h"
#include "../include/languages/ita.h"
#include <stdio.h>


void printMainMenu() {
    printf("%s",MAIN_MENU);
}

int main() {
   int sceltaM = -1;
                                                                                                                                                                                                                                                                        
    do {
        printMainMenu();
        scanf("%d", &sceltaM);
        switch (sceltaM) {
            case 1:
                if(confirmChoise(ROMAN_CONVERTER)==1){
                    launchRomeMenu();
                }
                break;
            case 2:
                if(confirmChoise(BINARY_CONVERTER)==1){
                    lanuchBinaryMenu();
                }
                break;
            case 3:
                if(confirmChoise(CIRCUITS_CALCULATOR)==1){
                    launchCircuitsMenu();
                }
                break;

            case 1312:
                printf(CHEAT);
                rickRoll();

                break;
            case 0:
                printf(GOODBYE);
                break;
            default:
                printf(INVALID_CHOISE);
                break;
        }
    } while (sceltaM != 0);

    return 0;
}
