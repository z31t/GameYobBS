#include <stdio.h>
#include "console.h"

void printVersionInfo() {
    clearConsole();
    printf("GameYob %s\n", VERSION_STRING);
    printf("\nModded for bottom screen\nusage only");
}
