#include <stdio.h>
int main()
{
  char s;
  printf("Enter a character:");
  scanf("%c",&s);
  if((s>='a' && s<='z')||(s>='A' && s<='Z'))
  printf("%c is an alphabet",s
  else
  printf("Not an alphabet");
  return 0;
}
