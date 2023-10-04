#include<stdio.h>
int main()
{
    char arr[100];
    printf("enter the string : ");
    gets(arr);

    int i=0;

    while(arr[i]!='\0')
    {
        if(arr[i]>='a'&&arr[i]<'z')
        {
            arr[i]-=32;
        }
        else if (arr[i]>='A'&&arr[i]<'Z')
        {
            arr[i]+=32;
        }
        i++;
    }

    arr[i]='\0';

    puts(arr);

}







