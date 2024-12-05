#include "../../include/binary_converter/binaryConverter.h"
#include <string.h>
#include <math.h>

long decimal(const char* bin) {
    long ris = 0;                
    int i = 0;                   
    int len = strlen(bin);    

    
    for (int j = 0; j < len; j++) {
    
        if (bin[j] == '0' || bin[j] == '1') {
    
            ris += (bin[j] - '0') * pow(2, len - 1 - j);
        } else {
    
            return 0;
        }
    }

    return ris;
}