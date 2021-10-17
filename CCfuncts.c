#include "CCfuncts.h"

#include <stdio.h>
#include <string.h>

char* getUserInput(char myStr[MAX_MESSAGE_LEN]) {
    fprintf(stdout, "Enter the message you wish to be encrypted: ");
    fgets(myStr, MAX_MESSAGE_LEN, stdin);
    
    return myStr;
}