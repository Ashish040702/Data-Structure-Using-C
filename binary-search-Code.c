#include<stdio.h>
#include<conio.h>
void main()
{
  int arr[10],i,search,first,last,middle;
  printf("Enter the elements in an ascending order:");
  for(i=0; i<10; i++)
  scanf("&d",&arr[i]);
  printf("Enter the element to search:");
  scanf("%d",&search);
  first=0;
  last=9;
  middle=(first+last)/2;
  while(first<=last)
  {
    if(arr[middle]<search)
    first=middle+1;
   else if(arr[middle]==search)
   {
    printf("\n The number %d is found at position &d",search,middle+1);
    break;
   }
  else
   last=middle-1;
   middle=(first+last)/2;
  }
if(first>last)
 printf("\n The number %d is not found in given array",search);

} 