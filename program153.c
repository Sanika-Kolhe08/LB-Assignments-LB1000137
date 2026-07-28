//Write a program which accept string from user and 
//return difference between frequency of small charcters and capital characeters

#include <stdio.h>

int CountDiff(const char *str)
{
    int iSmallCount = 0;
    int iCapitalCount = 0;

    while(*str != 0)
    {
        if(*str>='a' && *str <='z')
        {
            iSmallCount++;
        }
        else if(*str>='A' && *str <='Z')
        {
            iCapitalCount++;
        }

        *str++;
    }

    return iCapitalCount - iSmallCount;
}

int main()
{
    char arr[100] = {'\0'};
    int iRet = 0;

    printf("Enter a string: \n");
    scanf("%[^'\n']s",arr);

    iRet = CountDiff(arr);
    printf("The difference between frequency of small characters and Capital characters is : %d",iRet);

    return 0;
}