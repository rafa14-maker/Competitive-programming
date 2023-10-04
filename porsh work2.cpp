#include<stdio.h>
#include<string.h>

int main()
{
    char arr[100],frr[100];

    int i,j=0,k;

    printf("enter :");

    gets(arr);

    for(i=0;arr[i]!='\0';i++) {

		j++ ;
	}

    for(i=0,k=j-1;i<j;k--,i++)
    {
        frr[i]=arr[k];
    }
    frr[i]='\0';


  puts(frr);


}
