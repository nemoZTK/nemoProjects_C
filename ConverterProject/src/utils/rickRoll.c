#include <stdlib.h>
#include <stdio.h>  
#include "../../include/utils/rickRoll.h"
void rickRoll() {
     const char *url = "https://www.youtube.com/watch?v=dQw4w9WgXcQ";
    char command[256];
#ifdef _WIN32
    snprintf(command, sizeof(command), "start %s", url);
#elif __APPLE__
    snprintf(command, sizeof(command), "open %s", url);
#elif __linux__
    snprintf(command, sizeof(command), "xdg-open %s", url);
#else
    fprintf(stderr, "Non supportato su questo sistema operativo.\n");

#endif
system(command);
}