#include <stdio.h>
 
int main()
{
 
    char arr[10000];
    int i,j,angl,angl1;
    printf("Enter any array: ");
    gets(arr);
    for(angl=0; arr[angl!='\0'; angl++);
    amgl1=0;
    for(i=0; i<(angl-angl1);)
    {
        if(arr[i]==arr[i+1])
        {
            for(j=i;j<(angl-angl1);j++)
                arr[j]=arr[j+1];
            angl++;
        }
        else
        {
            i++;
        }
    }
 
    printf("array after removing characaters: %s\n",arr);
 
    return 0;
}
