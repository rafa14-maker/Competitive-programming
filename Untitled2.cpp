#include <bits/stdc++.h>
using namespace std;
int main(){
	
	long long int n,e,o ;
	scanf("%lli",&n) ;
	
	e=n/2;
	e=e*(e+1) ;
	
	
	if(n%2==0){
		o=n/2;
		o=o*o ;
		
		
	}
	
	else {
		o=(n/2)+1 ;
		o=o*o ;
		
		
		}
		printf("%lli\n",e-o) ;
	
	
}
