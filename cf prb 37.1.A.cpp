#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
	int arr[1001]={0},i,n,k,h,num;
	cin>>n;
	while(n>0)
	{
		cin>>k;
		arr[k]+=1;
		n--;
	}
	
	num= *max_element(arr,arr+1001);
	
	h= 1001 - count(arr,arr+1001,0);
	
	cout<<num<<" "<<h<<endl;
	
	return 0;
}
