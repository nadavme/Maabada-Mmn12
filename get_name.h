
#ifndef MMN12_GET_NAME_H
#define MMN12_GET_NAME_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>

#define NULL_TERMINATED_STRING '\0'
#define MAX_STRING  20
#define MAX_NAMES  30
#define NUM_OF_CALLS 10

char NAMES_LIST[30][20];



/*!
 * * The function pull a number between 1-30, and return the name that in that number place in the NAMES_LIST.
 * @return the name that came out in the draw.
 */
char* get_name();

/*!
 *The function takes the string from the stdin and make all its letters lowercase, and then checks if that name is
 * already at the list. if not, it will add it to the list.
 * @param str is the string from stdin.
 * @param i is the number of elements that are already in the list.
 * @return True if the list contains the new name, anf False else.
 */
bool contains(char str[], int i);







#endif //MMN12_GET_NAME_H
