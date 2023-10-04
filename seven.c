#include<stdio.h>
#include<strings.h>
int main()
{
    char arr[100],frr[100];

    int b;

    printf("enter the string :");

    gets(arr);


    b=  strlen(arr)-1;

    int j=0;

    while(arr[j]!='\0')
    {
        frr[j]=arr[b];
        j++;
        b--;
    }


    int i=0,counter=-1;

    while(arr[i]!='\0'&&frr[i]!='\0')
    {
       if(arr[i]==frr[i])
       {
           counter++;
       }
       else if(arr[i]!=frr[i])
        {
            counter=0;
            break;
        }
        i++;
    }
    if(counter==0)
    {
        printf("%s and %s not pardendicular");
    }
}
