#include<bits/stdc++.h>
using namespace std;

int arr[1005];
int i,j,a,b,sum,counter,k,t,r,l,n,mid;


bool check( int c) {
	int sum = 0, k = 1;
	for(j = 0;j< n;j++) {
		sum += arr[j];
		if(sum>c) {
			sum = arr[j];
			k++;
		}
	}
	return k <=a;
}

int main()
{
  //  cin>>t;

   // for(i=1;i<=t;i++)
   while(scanf("%d %d",&n,&a)!=EOF)
    {
       // cin>>n>>a;
        r=0;
        l=0;
        for(j=0;j<n;j++)
        {
            cin>>arr[j];
            r+=arr[j];
            l=max(l,arr[j]);
        }
         while(r>l)
       {
         mid=(r+l)/2;
        if(check(mid)==true)
        {
            r=mid;
        }
        else
        {
            l=mid+1;
        }

    }
  //  printf("Case %d: %d\n",i,r);
  cout<<r<<endl;

    }

}
