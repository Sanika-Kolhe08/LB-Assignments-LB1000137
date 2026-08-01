//Write a program which accepts a string from user and converts it into upper case.

#include <stdio.h>

void strUpper(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }

        *str++;
    }
}
int main()
{
    char arr[20];

    printf("Enter a string : \n");
    scanf("%[^'\n']s",arr);

    strUpper(arr);
    printf("Modified string is : \n %s",arr);


    return 0;
}