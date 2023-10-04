#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	int T,n;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		int t=2,k;
		bool flag=true;
		while(1)
		{
			k=n/t;
			if(t%2&&k-t/2<=0||t%2==0&&k-t/2<0)
			{
				flag=false;
				break;
			}
			if(t%2&&n%k==0&&n/k==t) break;
			if(t%2==0&&n%(2*k+1)==0&&n/(2*k+1)==t/2) break;
			t++;
		}
		if(flag)
		{
			printf("%d = ",n);
			if(t%2)
			{
				for(int i=k-t/2;i<k+t/2;i++)
				printf("%d + ",i);
				printf("%d\n",k+t/2);
			}
			else
			{
				for(int i=k-t/2+1;i<k+t/2;i++)
				printf("%d + ",i);
				printf("%d\n",k+t/2);
			}
		}
		else printf("IMPOSSIBLE\n");
	}
	return 0;
}

