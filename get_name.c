
#include "get_name.h"






/*!
 *See header file.
 * @return
 */
char get_name()
{
    srand(time(NULL));
    return NAMES_LIST[rand() % 30];
}

/*!
 * See header file.
 * @param str
 * @param i
 * @return
 */
bool contains(char str[], int i)
{
    int j;
    for (j = 0; j < i; j++)
    {
        if(NAMES_LIST[j] == str) return true;
    }
    return false;
}


/*!
 *Runs the program.
 * @return
 */
int main() {
    char str[20];
    unsigned long j;
    int i, k= 0;
    printf("Please enter 30 names: ");
    fgets(str, 300, stdin);
    printf("\nThe names that was accepted correctly are:\n%s", str);
    /*ensure 'str' doesn't holds '\n' or ' '*/
    if(str[strlen(str)-1] == '\n' || str[strlen(str)-1] == ' ') str[strlen(str)-1] = NULL_TERMINATED_STRING;
    for(j = 0; j <  strlen(str); j++)
    {
        str[j] = tolower(str[j]);
    }
    /*Checks if the name was already accepted as an input, before adding it to the list*/
    while(k < 30)
    {
        for (i=0; i < k; i++)
        {
            if (contains(str, i))
            {
                printf("\nOne of the names was entered twice. The program will shut down now");
                exit(11);
            }
        }
        NAMES_LIST[i] = (char) str;
        printf("%c", get_name());
        k++;
    }


    return 0;
}