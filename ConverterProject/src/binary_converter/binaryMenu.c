#include <stdio.h>
#include "../../include/binary_converter/binaryConverter.h"
#include "../../include/utils/confirm.h"




void lanuchBinaryMenu(){
    int sceltaC=800,dec=0,bin=0;

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
                                   
                            scanf("%d",&dec);
                            binary(dec);    
                            }   
                            break;
                            case 1:
                            if(confirmChoise("\n\n-------hai-scelto:-da-binari-decimali,-confermi?------\n\n")==1){
                            printf("--------ok-hai-scelto:-da-binari-a-decimali----------\n"
                                   "--------dimmi-il-numero-che-vuoi-convertire------------\n");
                              
                            scanf("%d",&bin);
                            printf("--------il-numero-%d-convertito-diventa-%d",bin,decimal(bin));

                            ///tuta sta cosa tanto va tolta e ripensata
                                   int temp = decimal(bin);
                                   int cifre=0;
                                   if(temp==0){cifre=1;}
                                   while (temp != 0) {
                                          temp /= 10;
                                          cifre++;
                                   }
                                   
                                   
                                   for(int p=13-cifre;p>=0;p--,printf("-"));   //lo so  che lo sto facendo per metà ma era tardi e avevo sonno,
                                                                              //poi son passati mesi e mi son reso conto che ci son troppe cose
                                   printf("\n");                             // da tener in considerazione per aver un menu con le ---- sempre della stessa dim
                                                                            // quindi per ora lascio sto scempio e quando mi verrà un idea migliore la applicherò


                            }
                            break;
                     }
                     }while(sceltaC!=0);


}