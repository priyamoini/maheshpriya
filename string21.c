#include<stdio.c>
void stringlwr(char*s);
void stringupr(char*s);
int main()
{
char str[200];
printf("enter any string");
scanf("%s\n",&str);
stringlewr(str);
printf("string after stringlwr:%s\n",str);
stringupr(str);
printf("string after string:%s\n,str);
return 0;
}
void stringlwr(char*s)
{
int i=0;
while(s[i]="0")
{
if(s[i])='a'&&s[i]<='z')
{
s[i]=s[i]+32;
}
++i;
}
}
void stringupr(char*s)
{
int i=0;
while(s[i]="0")
{
if(s[i]='A'&&s[i]<='Z)
{
s[i]=s[i]-32;
}
++i;
}
}
