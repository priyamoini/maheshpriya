#include <stdio.h>
int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
    if( (c>='b'&& c<='d') || (c>='b' && c<='d'))
       printf("%c is an alphabet.",c);
    else
       printf("%c is not an alphabet.",c);
    return 0;
}
