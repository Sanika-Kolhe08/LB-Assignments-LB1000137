//Write a program which accept string from user and accept one character.
//And returns the index of the first occurence of that character

#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

int CountFrequency(char *str , char ch)
{
    int iCount = 0;
    
    while(*str!=0)
    {
        if(*str == ch)
        {
            break;
        }
        *str++;
        iCount++;

    }

    return iCount;

}
int main()
{
    char arr[20]= {'\0'};
    char cValue = 0;
    int iRet = 0;

    printf("Enter a String : \n");
    scanf("%[^'\n']s",arr);

    printf("Enter a Character : \n");
    scanf(" %c",&cValue);

    iRet = CountFrequency(arr, cValue);

    printf("The index of first occrence of that character is: %d",iRet);

    return 0;
}