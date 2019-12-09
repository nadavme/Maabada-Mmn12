
#include "get_name.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

char NAMES_LIST[30];



/*!
 *
 * @return
 */
char get_name()
{
    return NAMES_LIST[rand() % 30];
}

bool contains(char str, int i)
{
    int j;
    for (j = 0; j < i; j++)
    {
        if(NAMES_LIST[j] == str) return false;
    }
    return true;
}


/*!
 *
 * @return
 */
int main() {
    char str[20];
    int i, j= 0;
    for (i=0; i < 30; i++)
    {
        fgets(str, 20, stdin);
        for(j = 0; str[j]; j++)
        {
            str[j] = tolower(str[j]);
        }

        if(contains((char) str, i))
        {
            printf("%s", "This name was already accepted. The program will shut down now");
            exit(11);
        }
        NAMES_LIST[i] = (char) str;
        printf("%s", get_name());
        i++;

    }
    return 0;
}