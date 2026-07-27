//Write a program which accepts a string from user and count the capital characters

#include <stdio.h>

int CountCapital(const char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCount++;
        }

        *str++;
    }

    return iCount;
}

int main()
{
    char arr[50] = {"\0"};
    int iRet = 0;

    printf("Enter a string : \n");
    scanf("%[^'\n']s",arr);

    iRet = CountCapital(arr);
    printf("The total number of Capital Alphabets are : %d\n",iRet);

    return 0;
}