#include <stdio.h>

int main()
{
    /*ar str[7];
    int i;

    for(i=0;i<3;i++)
    {
        fgets(str, sizeof(str), stdin);
        printf("Read %d: %s \n", i+1, str);
    }


    char Str[5];
    int i;
    for(i=0;i<3;i++)
    {
        fgets(Str, sizeof(Str), stdin);
        printf("Read %d: %s \n", i+1, Str);
    }
    */

    char str1[7];
    int i;
    for(i=0;i<3;i++)
    {
        fgets(str1, sizeof(str1), stdin);
        printf("Read %d: %s \n", i+1, str1);
    }
    return 0;
}