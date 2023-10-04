#include<stdio.h>
int main()
{
    char arr[100],frr[100],qrr[100];

    int i,j=0;

    printf("enter the string 1 :");
    gets(arr);



    printf("enter the string 2 :");
    gets(frr);

    i=0;

    while(arr[i]!='\0')
    {
        qrr[i]=arr[i];
        i++;
    }

     while(frr[j]!='\0')
     {
         qrr[i]=frr[j];
         i++;
         j++;

     }

     qrr[i]='\0';

    printf("the concate of two strings : ");
    puts(qrr);
}
