
#include "get_name.h"






/*!
 *See header file.
 * @return
 */
char get_name()
{
    srand(time(NULL));
    int TheChosen = rand()%30;
    return (char) NAMES_LIST[TheChosen];
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
    for (k = 0; k < strlen(str); k++)
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
    printf("Please enter 30 names: ");
    for (i = 0; i < 30; i++)
    {
        scanf("%s", str);
        /*ensure 'str' doesn't holds '\n' or ' '*/
        if(str[strlen(str)-1] == '\n' || str[strlen(str)-1] == ' ') str[strlen(str)-1] = NULL_TERMINATED_STRING;
        if (contains(str, i))
        {
            printf("\nThe names that was accepted correctly are:\n");
            for (k = 0; k < i; k++)
            {
                printf(" %s,", NAMES_LIST[k]);
            }
            printf("po habaaia1");
            printf("\nOne of the names was entered twice. The program will shut down now");
            exit(11);
        }
        else strcpy(NAMES_LIST[i], str);
    }
    printf("\nThe names that was accepted correctly are:\n");
    for (i = 0; i < 30; i++)
    {
        printf(" %s,", NAMES_LIST[i]);
    }
    printf("po habaaia2");

//
//    /*Checks if the name was already accepted as an input, before adding it to the list*/
//    while(k < 30)
//    {
//        for (i=0; i < k; i++)
//        {
//            if (contains(str, i))
//            {
//                printf("\nOne of the names was entered twice. The program will shut down now");
//                exit(11);
//            }
//        }
//        strcpy(NAMES_LIST[i], str);
//        printf("%c", get_name());
//        k++;
//    }
//    printf("\nThe names that was accepted correctly are:\n");
//    for (i = 0; i < 30; i++)
//    {
//        printf(" %s,", NAMES_LIST[i]);
//    }


    return 0;
}