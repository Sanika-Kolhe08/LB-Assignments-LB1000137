//Write a program which accepts a string from user and converts it into lower case

#include <stdio.h>

void strlower(char *str)
{
    while(*str != '\0')
    {
        if(*str>= 'A' && *str <= 'Z')
        {
            *str = *str +32;
        }
        str++;
    }

}
int main()
{
    char arr[20];

    printf("Enter a string : \n");
    scanf("%[^'\n']s",arr);

    strlower(arr);
    printf("Modified string is: %s",arr);

    return 0;
}