#include <stdio.h>
#include <string.h>

#ifndef CCFUNCTS_H
#define CCFUNCTS_H
#define MAX_MESSAGE_LEN 2000

//Get's user input.
char* getUserInput(char someStr[MAX_MESSAGE_LEN]);

//gets the length of the message entered.
int arrayLength(char someStr[MAX_MESSAGE_LEN]);

// This function puts each character into each slot of the array and returns the character
// by character array
char* putStringInArray(char someStr[MAX_MESSAGE_LEN], char characterArray[MAX_MESSAGE_LEN], int length); 

#endif