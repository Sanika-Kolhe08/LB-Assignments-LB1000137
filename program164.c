//Write a program which accept string from user and accept one character.
//And returns the index of the last occurence of that character

#include <stdio.h>

int CountFrequency(char *str , char ch)
{
    int iCount = 0;
    int tmp = 0;
    
    while(*str!=0)
    {
        if(*str == ch)
        {
            tmp = iCount;
        }
        *str++;
        iCount++;
    }

    return tmp;

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

    printf("The index of last occrence of that character is: %d",iRet);

    return 0;
}