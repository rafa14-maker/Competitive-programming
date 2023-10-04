#include<bits/stdc++.h>
using namespace std;
int prime(int a)
{
int i;
for(i=2;i<a;i++)
{
	if(a%i==0)
	{
		return 1;
	}
}
return 0;

}
int main()
{
	int n,a,b,l,k,i;
	cin>>n;
   a=n-4;
   b=4;
   for(i=1; i<=n; i++)
   {
   	k=prime(a);
   	l=prime(b);
   	if(k==1&&l==1)
   	{
   		cout<<a<<" "<<b<<endl;
   		return 0;
	   }
	   a--;
	   b++;
   	
   }
}
