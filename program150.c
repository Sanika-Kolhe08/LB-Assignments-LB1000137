//Accept charachter from user.
//Display its ASCII value in decimal octal and Hexadecimal 
#include  <stdio.h>

void DisplayASCII(char ch)
{
    int iCnt = ch;
   
    printf("%d\t\t %o\t\t %x\t\t %c",iCnt,iCnt,iCnt,iCnt);
    printf("\n");
 
}

int main()
{
    char cValue = '\0';

    printf("Enter a character: \n");
    scanf("%c",&cValue);

    DisplayASCII(cValue);

    return 0;
}
