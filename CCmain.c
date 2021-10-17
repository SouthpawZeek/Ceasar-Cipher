#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "CCfuncts.h"

int main(void) {
    char someStr[MAX_MESSAGE_LEN];
    getUserInput(someStr);
    fprintf(stdout, "The message you want encypted is : %s", someStr);
    return 0;
}