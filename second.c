#include<stdio.h>
int main()
{
    char arr[100],frr[100];
    int i,j;

    printf("enter the string : ");
    gets(arr);

    for(i=0;arr[i]!='\0';i++)
    {
        frr[i]=arr[i];

    }

    frr[i]='\0';
     printf("coiped the string : ");
    puts(frr);
}
