//Write a program which accept string from user 
//And reverse that string in place

#include <stdio.h>

void ReverseStr(char *str)
{ 
    char *start = str;
    char temp;
    while(*str!=0)
    {
        *str++;
    }
    str--;
    // Reverse in place
    while(start < str)
    {
        temp = *start;
        *start = *str;
        *str = temp;

        start++;
        str--;
    }
}
int main()
{
    char arr[20]= {'\0'};

    printf("Enter a String : \n");
    scanf("%[^'\n']s",arr);

    ReverseStr(arr);

    printf("Reversed string is : \n%s\n",arr);

    return 0;
}