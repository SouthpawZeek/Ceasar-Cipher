#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "CCfuncts.h"

int main(void) {
    char someStr[MAX_MESSAGE_LEN];
    char* myStr[MAX_MESSAGE_LEN];
    myStr[MAX_MESSAGE_LEN] = getUserInput(someStr);
    fprintf(stdout, "%s", myStr);
    return 0;
}