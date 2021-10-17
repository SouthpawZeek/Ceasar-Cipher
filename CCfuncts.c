#include "CCfuncts.h"

#include <stdio.h>
#include <string.h>

char* getUserInput(char somestr[MAX_MESSAGE_LEN]) {
    fprintf(stdout, "Enter a message you would like encrypted: ");
    fgets(somestr, MAX_MESSAGE_LEN, stdin);
    return somestr;
}

int arrayLength(char someStr[MAX_MESSAGE_LEN]) {
    int stringLength;
    // get the length of the message with spaces. (currently includes )
    stringLength = strlen(someStr);
    return stringLength;
}

char* putStringInArray(char someStr[MAX_MESSAGE_LEN], char characterArray[MAX_MESSAGE_LEN], int length) {
    for (int i = 0; i < length; i++) {
        characterArray[i] = someStr[i];
        fprintf(stdout, "%s\n", characterArray);
    }

    return characterArray;
}

