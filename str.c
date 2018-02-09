#include <stdio.h>
#include <string.h>
 
int main()
{
   char arr[10];
 
   printf("anter a string to reverse\n");
   gets(arr);
 
   strrev(arr);
 
   printf("reverse of the string is \n%s\n", arr);
 
   return 0;
}
