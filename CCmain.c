#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "CCfuncts.h"

int main(void) {
    char someStr[MAX_MESSAGE_LEN];
    char characterArray[MAX_MESSAGE_LEN];
    //get the message the user wants.
    getUserInput(someStr);
    fprintf(stdout, "The message you want encypted is : %s", someStr);

    //get the length of the string including null character. 
    int stringLength = arrayLength(someStr);
    fprintf(stdout, " Here is the string length: %i\n\n\n", stringLength);

    putStringInArray(someStr, characterArray, stringLength);
    return 0;
}