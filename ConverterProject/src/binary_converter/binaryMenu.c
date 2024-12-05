#include <stdio.h>
#include "../../include/binary_converter/binaryConverter.h"
#include "../../include/utils/confirm.h"




void lanuchBinaryMenu(){
    int sceltaC=800,i=0;
    long dec=0;
    char bin[BINARY_SIZE+1];

                     do{
                     printf("-------------<benvenuto nel convertitore>--------------\n"
                            "-------<per-covertire-in-numeri-binari:-premi-2>-------\n"
                            "-------<covertire-da-binari-a-decimali:-premi-1>-------\n"
                            "------<premi-0-se-vuoi-tornare indietro:-premi-0>------\n"
                            "---------------<fai-la-tua-scelta-dai>-----------------\n");
                     scanf("%d",&sceltaC);
                     fflush(stdin);



                     switch(sceltaC){
                            case 2:   if(confirmChoise("\n\n-------hai-scelto:-da-decimali-a-binari,-confermi?------\n\n")==1){
                            printf("--------ok-hai-scelto:-da-decimali-a-binari------------\n"
                                   "--------dimmi-il-numero-che-vuoi-convertire------------\n");
                                   
                            scanf("%ld",&dec);                                                
                         printf("--------il-numero-%ld-convertito-diventa-%s\n",dec,binary(dec));
                                                                                                                                                                      

                     
                            }   
                            break;
                            case 1:
                                     
                            if(confirmChoise("\n\n-------hai-scelto:-da-binari-decimali,-confermi?------\n\n")==1){
                            printf("--------ok-hai-scelto:-da-binari-a-decimali----------\n"
                                   "--------dimmi-il-numero-che-vuoi-convertire------------\n");
                            scanf("%s",bin);
                            dec=decimal(bin);
                            printf("--------il-numero-%s-convertito-diventa-%ld",bin,dec);

                            }
                            break;
                     }
                     }while(sceltaC!=0);


}