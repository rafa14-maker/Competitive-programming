#include<stdio.h>
int main()
{
    char arr[100];

    int i,counter=0;

  printf("enter any string  : ");

  gets(arr);

  for(i=0;arr[i]!='\0';i++)
  {
      counter ++;
  }

   printf("the size of %s is %d",arr,counter );

 return 0;
}
