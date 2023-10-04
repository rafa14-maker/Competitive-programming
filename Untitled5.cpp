#include<bits/stdc++.h>
using namespace std;
int main(){

int n,i,j,a;

scanf("%d",&n);

int arr[n],frr[n];

for(i=0;i<n;i++)
{
	scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
	frr[i]=0;
}
for(i=0;i<n;i++)
{
	for(j=1;j<=arr[i];i++)
	{
		if(arr[i]%=j=0)
		{
			frr[i]+=1;
		}
	}
}
for(i=0;i<n;i++)
{
	if(frr[i]==3)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
}

}
