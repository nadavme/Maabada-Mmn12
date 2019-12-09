#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char NAMES_LIST[30];



/*!
 *
 * @return
 */
char get_name()
{
    return NAMES_LIST[rand() % 30];
}


/*!
 *
 * @return
 */
int main() {
    printf("Hello, World!\n");
    return 0;
}