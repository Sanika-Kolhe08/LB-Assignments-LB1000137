//Write a program which accepts string from the user
//And Checks whether it contains vowels in it 

#include <stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckVowel(const char *str)
{
    BOOL bStatus = FALSE;
    while (*str != 0 )
    {
        if( *str == 'a' || *str == 'e' ||*str == 'i' || *str == 'o' || *str =='u' ||
        *str == 'A' || *str == 'E' ||*str == 'I' || *str == 'O' || *str =='U')
        {
            bStatus = TRUE;
            break;
        }
        *str++;
    }

    return bStatus;
    
}
int main()
{
    char arr[100] = {'\0'};
    BOOL bRet = FALSE;

    printf("Enter a string: \n");
    scanf("%[^'\n']s",arr);

    bRet = CheckVowel(arr);

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