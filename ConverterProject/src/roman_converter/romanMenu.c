
#include "../../include/roman_converter/romanConverter.h"
#include "../../include/utils/confirm.h"
//#include "../../include/utils/rickRoll.h"
#include <stdio.h>
#define DIM 300
int sceltaR = -1,dec;

char rom[DIM];
void printRomeMenu(){
                     printf("-------------<benvenuto nel convertitore>--------------\n"
                            "-------<per-covertire-in-numeri-romani:-premi-2>-------\n" 
                            "-------<covertire-da-romani-a-decimali:-premi-1>-------\n"
                            "------<premi-0-se-vuoi-tornare indietro:-premi-0>------\n"
                            "---------------<fai-la-tua-scelta-dai>-----------------\n");
                     scanf("%d",&sceltaR);
                     fflush(stdin);   
}
void launchRomeMenu(){
     
                     do{
                        printRomeMenu();
                     switch(sceltaR){
                            case 2:
                            if (confirmChoise("---------ok-hai-scelto:-da-numeri-a-romani-------------\n"
                                   "------------sicuro-che-hai-scelto-bene?----------------\n"
                                   "----------------------y-or-n---------------------------\n")==1){

                            printf("---------ok-hai-scelto:-da-numeri-a-romani-------------\n"
                                   "--------dimmi-il-numero-che-vuoi-convertire------------\n");
                            scanf("%d",&dec);
                            printf("--------il-numero-%d-convertito-diventa-",dec);
                            decimalToRoman(dec);   
                            }    
                            break;
                            case 1:
                            if (confirmChoise("---------ok-hai-scelto:-da-romani-a-numeri-------------\n"
                                   "------------sicuro-che-hai-scelto-bene?----------------\n"
                                   "----------------------y-or-n---------------------------\n")==1){ 
                           romanToDecimal(rom);

                            printf("---------ok-hai-scelto:-da-romani-a-numeri-------------\n"
                                   "-------dimmi-il-numero-romano-da-convertire------------\n");
                            scanf("%s",rom);
                            printf("--------il-numero-%s-convertito-diventa-%d-------------\n",rom,romanToDecimal(rom));       
                            }
                            break;

                     }
                     }while(sceltaR!=0);

}