//Accept a string from user 
//Count the number of small characters

#include <stdio.h>

int CountSmall(const char *str)
{
    int iCount = 0;
    while(*str != 0)
    {
        if(*str >= 'a' && *str<='z')
        {
            iCount++;
        }

        *str++;
    }
    return iCount;
}
int main()
{
    char arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter a string : \n");
    scanf("%[^'\n']s",arr);

    iRet = CountSmall(arr);
    printf("The number of small alphabets are : %d",iRet);

    return 0;
}