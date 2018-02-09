#include <stdio.h>
 
int main()
{
   char arr[200];
 
   printf("enter a string to reverse\n");
   gets(arr);
 
   strrev(arr);
 
   printf("reverse of the string is \n%s\n", arr);
 
   return 0;
}
