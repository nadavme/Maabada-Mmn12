
#include "get_name.h"



/*!
 *See header file.
 * @return
 */
char*  get_name()
{
    int TheChosen = rand()%30;
    return  NAMES_LIST[TheChosen];
}

/*!
 * See header file.
 * @param str
 * @param i
 * @return
 */
bool contains(char str[], int i)
{
    int j, k;
    /*run all over the string*/
    for (k = 0; k < (int) strlen(str); k++)
    {
        str[k] = tolower(str[k]);
    }
    /*checks if the name is already exists in the list*/
    for (j = 0; j < i; j++)
    {
        if(strcmp(NAMES_LIST[j], str) == 0) return true;
    }
    return false;
}


/*!
 *Runs the program.
 * @return
 */
int main() {
    char str[MAX_STRING];
    int i;
    printf("Please enter 30 names: ");
    for (i = 0; i < MAX_NAMES; i++)
    {
        scanf("%s", str);
        printf("%s ", str);/*prints immediately the input*/
        /*ensure 'str' doesn't holds '\n' or ' '*/
        if(str[strlen(str)-1] == '\n' || str[strlen(str)-1] == ' ') str[strlen(str)-1] = NULL_TERMINATED_STRING;
        if (contains(str, i))
        {
            /*breaks with an informative message*/
            printf("\n\nOne of the names was entered twice. The program will shut down now\n");
            exit(11);
        }/*add the new name to the list*/
        else strcpy(NAMES_LIST[i], str);
    }/*calls get_name 10 times, and prints the chosen names*/
    printf("\n\n The names that were chosen randomly are:\n");
    srand(time(NULL));/*so rand will be efficient*/
    for (i = 0; i < NUM_OF_CALLS; i++)
    {
        printf("\n%s ", get_name());
    }
    return 0;
}