//Write a program which accepts a string from the user and toggle the case

#include <stdio.h>

void Toggle(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        *str++;
    }
}
int main()
{
    char arr[20];

    printf("Enter a String : \n");
    scanf("%[^'\n']s",arr);

    Toggle(arr);
    printf("Modified String is : \n%s",arr);


    return 0;
}