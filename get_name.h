
#ifndef MMN12_GET_NAME_H
#define MMN12_GET_NAME_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>

#define NULL_TERMINATED_STRING '\0'
char NAMES_LIST[30];



/*!
 *
 * @return
 */
char get_name();

/*!
 *
 * @param str
 * @param i
 * @return
 */
bool contains(char str[], int i);







#endif //MMN12_GET_NAME_H
