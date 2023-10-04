#include <bits/stdc++.h>
using namespace std;
int main()

{

int n,t,i;

scanf("%d %d",&n,&t) ;


if(n==1 &&t==10 ) {
	
	
	printf("-1\n") ;
}

else if(t==10) {
	
	printf("1") ;
	for(i=1;i<n;i++){
		
		printf("0") ;
	}
	printf("\n") ;
	
	
}

else {


for(i=1;i<=n;i++) {
	
	printf("%d",t ) ;
	
	
}

printf("\n") ;

}
 return 0;
}
