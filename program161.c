//Write a program which accepts a string from user and accept a character from user and check whether 
//that character is present or not

#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL check(char *str, char ch)
{
    BOOL bFlag = FALSE;
    int i = 0;
    while(*str != 0)
    {
        if(*str == ch)
        {
            bFlag = TRUE;
            break;
        }
        *str++;
    }

    return bFlag;

}

int main()
{
    char arr[20] = {'\0'};
    char cValue = 0;
    BOOL bRet = FALSE;

    printf("Enter a String : \n");
    scanf("%[^'\n']s",arr);

    printf("Enter a character to search : \n");
    scanf(" %c",&cValue);

    bRet = check(arr, cValue);
    if(bRet == TRUE)
    {
        printf("Character is present");
    }
    else
    {
        printf("Character is not present");
    }

    return 0;

}