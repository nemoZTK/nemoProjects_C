#include "../../include/roman_converter/romanConverter.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h> 
// Array di valori romani
RomanValue romanTable[] = {
    {"M", 1000},
    {"CM", 900},
    {"D", 500},
    {"CD", 400},
    {"C", 100},
    {"XC", 90},
    {"L", 50},
    {"XL", 40},
    {"X", 10},
    {"IX", 9},
    {"V", 5},
    {"IV", 4},
    {"I", 1}
};

int romanToDecimal(char rom[]) {
    int length = strlen(rom);
    int decimal = 0;
    
    for (int i = 0; i < length; i++) {
        rom[i] = toupper(rom[i]);
    }
    
    for (int i = 0; i < length;) {
        int matched = 0;
    
        for (int j = 0; j < 13; j++) {
            int romanLen = strlen(romanTable[j].roman);
            if (i + romanLen <= length && strncmp(&rom[i], romanTable[j].roman, romanLen) == 0) {
                decimal += romanTable[j].decimal;
                i += romanLen;
                matched = 1;
                break;
            }
        }
        
        // Se non c'è una corrispondenza, ritorna errore
        if (!matched) {
            printf("Invalid Roman numeral: %s\n", rom);
            return -1; // Indica errore
        }
    }
    
    return decimal;
}
