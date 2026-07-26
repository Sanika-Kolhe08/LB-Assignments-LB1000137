//Accept Character from user.
//If character is small then display its corresponding captial character
//If character is capital then display its corresponding small character
//In other cases display as it is.
#include  <stdio.h>

void Displaychar(char ch)
{
    if((ch >='A'&& ch <= 'Z') )
    {
        printf("%c\n",ch+32);
    }

    else if(ch >='a'&& ch <= 'z')
    {
        printf("%c\n",ch-32);
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
