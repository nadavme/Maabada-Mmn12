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
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("%s", get_name());
    }
    return 0;
}