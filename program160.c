//Write a program which accepts a string from user and counts the number of white spaces

#include <stdio.h>

int CountSpaces(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        *str++;
    }

    return iCount;
}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    iRet = CountSpaces(arr);
    printf("The number of white spaces are : %d",iRet);

    return 0;
}