#include "CCfuncts.h"

#include <stdio.h>
#include <string.h>

char* getUserInput(char somestr[MAX_MESSAGE_LEN]) {
    fprintf(stdout, "Enter a message you would like encrypted: ");
    fgets(somestr, MAX_MESSAGE_LEN, stdin);
    return somestr;
}