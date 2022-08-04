#include<stdio.h>
int stelenuser_def(const char*s)
{
  int l;
  for(l=0; *s!='\0'; ++s)
  ++l;
  return l;
}
void main()
{
  int d;
   char s1[40];
  printf("Enter any String:");
  scanf("%s",&s1);
  d=stelenuser_def(s1);
  printf("The length of string is:%d",d);
}