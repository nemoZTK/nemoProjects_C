#ifndef ROMANCONVERTER_H
#define ROMANCONVERTER_H

// Dichiarazione della struttura
typedef struct {
    char roman[3]; // 2 caratteri più il terminatore '\0'
    int decimal;
} RomanValue;

// Prototipi delle funzioni
void printRomeMenu();
void launchRomeMenu();    
void decimalToRoman(int dec);
int romanToDecimal(char rom[]);  // Funzione che converte il romano in decimale

#endif 
