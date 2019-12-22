
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
    for (k = 0; k < (int) strlen(str); k++)
    {
        str[k] = tolower(str[k]);
    }
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
    char str[20];
    int i, k;
    char* TheChosenName;
    printf("Please enter 30 names: ");
    for (i = 0; i < 30; i++)
    {
        scanf("%s", str);
        printf("%s ", str);
        /*ensure 'str' doesn't holds '\n' or ' '*/
        if(str[strlen(str)-1] == '\n' || str[strlen(str)-1] == ' ') str[strlen(str)-1] = NULL_TERMINATED_STRING;
        if (contains(str, i))
        {

            printf("\n\nOne of the names was entered twice. The program will shut down now\n");
            exit(11);
        }
        else strcpy(NAMES_LIST[i], str);
    }
    printf("\n\n The names that were chosen randomly are:\n");
    srand(time(NULL));
    for (i = 0; i < 10; i++)
    {
        TheChosenName = get_name();
        printf("\n%s ", TheChosenName);
    }
    return 0;
}