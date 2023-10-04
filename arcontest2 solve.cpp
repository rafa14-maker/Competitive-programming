#include <bits/stdc++.h>
using namespace std;
int main() {

	int n,i,c=0 ,j;
	scanf("%d",&n) ;
	int a[n] ;

	for(i=0;i<n;i++) {

		scanf("%d",&a[i]) ;

		for(j=0;j<i;j++) {

			if(a[j]==a[i]) {
				a[i]= -1 ;
				break ;
			}
		}
	}

	sort(a,a+n) ;

	for(i=1;i<n-1;i++) {

		if( a[i]-a[i-1]==1 && a[i+1]-a[i]==1) {

			printf("YES\n") ;
			break ;
		}

		c++ ;
  }

     if(c==(n-2)) {

     	printf("NO\n") ;
	 }
}
