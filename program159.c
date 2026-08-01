//Write a program which accepts string from user and display only digits from that strinh
#include <stdio.h>

void DisplayDigits(char *str)
{
    while(*str != '\0' )
    {
        if(*str >= '0' && *str <= '9')
        {
            printf("%c",*str);
        }
        *str++;
    }

}
int main()
{
    char arr[20];
    printf("Enter a string : \n");
    scanf("%[^'\n']s",arr);

    DisplayDigits(arr);

    return 0;
}