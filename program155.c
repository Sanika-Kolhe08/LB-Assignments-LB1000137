//Write a program which accepts string from the user
//And Display it in reverse order

#include <stdio.h>

void Reverse(const char *str)
{
    char *start = NULL;

    start = str;

    while(*str != '\0')
    {
        str++;
    }
    str--;
    while (start <= str)
    {
        printf("%s\n",str);
        str--;
    }

    printf("\n");
}
int main()
{
    char arr[100] = {'\0'};

    printf("Enter a string: \n");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    return 0;
}