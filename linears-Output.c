#include<stdio.h>
void main()
{
  int key,arr[30],n;
printf("Enter the number of elements:");
scanf("%d",&n);
printf("Enter the elements:\n");
for(int i=0; i<n; i++)
{
 scanf("%d",&arr[i]);
}
printf("Enter the key to search:");
scanf("%d",&key);
int i;
for(i=0; i<n; i++)
  {
   if(arr[i]==key)
    {
      printf("Found!!");
      break;
    }
   if(arr[i]=='\0')
    printf("Not Found!!");
}
}