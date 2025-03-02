#include <stdio.h>
#include "../../include/utils/confirm.h"
int confirmChoise(const char *messaggio) {
    char conf;
    printf("%s (y/n): ", messaggio);
    scanf(" %c", &conf);
    return (conf == 'y'||conf=='s' ||conf=='S'|| conf == 'Y');
}