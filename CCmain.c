#include <stdio.h>
#include <string.h>

#include "CCfuncts.h"

int main(void) {
    char myStr[MAX_MESSAGE_LEN];
    fprintf(stdout, " your string is %s\n\n\n", getUserInput(&myStr[MAX_MESSAGE_LEN]));
    return 0;
}