#include <stdio.h>
#include <string.h>

#include "CCfuncts.h"

int main(void) {
    char myStr[MAX_MESSAGE_LEN];
    getUserInput(&myStr[MAX_MESSAGE_LEN]);
    fprintf(stdout, "%s", myStr);
    return 0;
}