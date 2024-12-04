#include "../../include/utils/confirm.h"
#include "../../include/utils/rickRoll.h"
#include "../../include/circuits/circuits.h"
#include <stdio.h>
void launchCircuitsMenu(){
int sceltaE=0;
                         do{   
                     printf("----benvenuto nel programma per calcolare i circuti----\n"
                            "---------<premi 1 per calcolare le resistenze>---------\n"
                            "-----<premi 2 per calcolare le cadute di tensione>-----\n"
                            "------------<premi 0 per tornare indietro>-------------\n");
                     scanf("%d",&sceltaE);
                     switch (sceltaE)
                     {
                     case 1://calcolo resistenze
                            if(confirmChoise("\n\n-------hai scelto di calcolare le resistenze, confermi?------\n\n")==1){
                                   resistenzaMain();
                            }
                            break;

                     case 2:
                     //TODO: 
                           printf("\n\n\t\tNOT READY YET!!!\n\n\n\n");               
                            rickRoll();
                     break;
                     default:

                            break;
                     }
                     }while(sceltaE!=0);             
}
