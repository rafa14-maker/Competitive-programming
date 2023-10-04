#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
 long long int n,i,a,b,c,d,e,f,k,l,p,fh,min,j;

cin>>n;
 for(i=0;i<n;i++)
 {
  scanf("%lli/%lli %lli/%lli %lli/%lli", &a, &b, &c, &d, &e, &f);
 	
 	
 	
 	k=b*d*f;
 	l=(k/b)*a+(k/d)*c+(k/f)*e;
 	
   fh=__gcd(k,l);
 	
 	l/=fh;
 	k/=fh;
 	
 	cout<<l<<"/"<<k<<endl;
 }
 
 return 0;
}
