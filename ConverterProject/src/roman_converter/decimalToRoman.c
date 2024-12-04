#include "../../include/roman_converter/romanConverter.h"
#include <stdio.h>
void decimalToRoman(int dec){
    
    char romano[200];
    
    int i=0,num=dec; //la i scorre l'array mentre num rappresenta quanto manca da convertire
    
    while(num>0){
       
        if(num>=1000){romano[i]='M';i++;num-=1000;}                                         //più semplice di quanto sembri,
       
            else if(num>=900){romano[i]='C';i++;romano[i]='M';i++;num-=900;}              // bastano le condizionni per ogni simbolo possibile,

                else if(num>=500){romano[i]='D';i++;num-=500;}                          //per togliersi da ogni problema quando hai 2 lettere                
       
                    else if(num>=400){romano[i]='C';i++;romano[i]='D';i++;num-=400;}  //avanzi di uno e metti una lettera alla volta 
       
                        else if(num>=100){romano[i]='C';i++;num-=100;}              //poi togli quel che hai convertito e continui while num>0

                            else if(num>=90){romano[i]='X';i++;romano[i]='C';i++;num-=90;}     
       
                                else if(num>=50){romano[i]='L';i++;num-=50;}
       
                                    else if(num>=40){romano[i]='X';i++;romano[i]='L';i++;num-=40;}
       
                                        else if(num>=10){romano[i]='X';i++;num-=10;}
       
                                            else if(num>=9){romano[i]='I';i++;romano[i]='X';i++;num-=9;}
       
                                                else if(num>=5){romano[i]='V';i++;num-=5;}
       
                                                    else if(num>=4){romano[i]='I';i++;romano[i]='V';i++;num-=4;}

                                                        else if(num>=1){romano[i]='I';i++;num-=1;}                      
    }
    romano[i] = '\0';//k<i                                                          //ora il carattere terminatore fuori dal ciclo

        for (int k = 0; romano[k] != '\0'; k++){printf("%c", romano[k]);} //solita stampa dell'array di caratteri
    
    for(int p=13-i;p>=0;p--,printf("-"));

    printf("\n");
    
}