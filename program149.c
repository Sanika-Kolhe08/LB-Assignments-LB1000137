//Accept Character from user.
//Check whether it is a special symbol or not.

#include  <stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckSpecial(char ch)
{
    if((ch >='A'&& ch <= 'Z') || (ch >='a'&& ch <= 'z') || (ch >='0'&& ch <= '9') )
    {
        return 0;
    }

    else
    {
        return 1;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter a character: \n");
    scanf("%c",&cValue);

    bRet = CheckSpecial(cValue);

    if(bRet == 1)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    return 0;
}
