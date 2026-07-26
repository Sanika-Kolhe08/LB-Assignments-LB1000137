//Accept Character from user.
//If character is capital then display all the characters from the input till Z
//If character is small then display all the characters in reverse order till a
//In other cases display as it is.
#include  <stdio.h>

void Displaychar(char ch)
{
    if((ch >='A'&& ch <= 'Z') )
    {
        for(ch;ch<='Z';ch++)
        {
            printf("%c\t",ch);
        }
    }

    else if(ch >='a'&& ch <= 'z')
    {
        for(ch;ch>='a';ch--)
        {
            printf("%c\t",ch);
        }
    }

    else
    {
        printf("%c\n",ch);
    }
}

int main()
{
    char cValue = '\0';
    printf("Enter a character: \n");
    scanf("%c",&cValue);

    Displaychar(cValue);

    return 0;
}
