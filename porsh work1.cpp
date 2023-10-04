#include<stdio.h>
#include <string.h>

int main() {

	char str[30]="por",ne[30] ;
	int i,j ;


	for(i=2,j=0;i>=0;i--) {

		ne[j]=str[i] ;
		j++ ;
	}
	ne[j]='\0' ;

  puts(ne);
}
