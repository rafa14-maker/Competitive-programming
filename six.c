#include<stdio.h>
int main()
{
    char arr[100];
    printf("enter the string : ");
    gets(arr);

    int i=0,counter1=0,counter2=0,counter3=0;

    while(arr[i]!='\0')
    {
        if(arr[i]>='a'&&arr[i]<'z'||arr[i]>='A'&&arr[i]<'Z')
        {
            counter1++;
        }
        else if (arr[i]>='0'&&arr[i]<'9')
        {
            counter2++;
        }
        else
        {
            counter3++;
        }
        i++;
    }

    arr[i]='\0';

    printf("the special character on %s is = alphabet %d , digit %d and others %d",arr,counter1,counter2,counter3);

    return 0;

}
