//Write a program which display ASCII table.
//Table contains symbols,Decimal, Hexadecimal and Octal Representation of every memeber from 0 to 255
#include  <stdio.h>

void DisplayASCII()
{
    int iCnt = 0;
    printf("decimal\t\t octal\t hexadecimal\t character\n");
    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        printf("%d\t\t %o\t\t %x\t\t %c",iCnt,iCnt,iCnt,iCnt);
        printf("\n");
    }
}

int main()
{
    DisplayASCII();

    return 0;
}
