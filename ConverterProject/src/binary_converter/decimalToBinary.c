
#include "../../include/binary_converter/binaryConverter.h"

#include <string.h>



char *binary(long dec) {
    static char risultato[BINARY_SIZE + 1];
    int quoziente = dec;
    int i = 0;

    memset(risultato, '0', sizeof(risultato));
    risultato[BINARY_SIZE] = '\0'; 
    do {
        risultato[BINARY_SIZE - i - 1] = (quoziente % 2) + '0'; 
        quoziente /= 2;
        i++;
    } while (quoziente > 0);

    return risultato;  

}