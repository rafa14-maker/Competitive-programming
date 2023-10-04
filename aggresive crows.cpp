#include<bits/stdc++.h>
using namespace std;

int arr[100005],i,n,k;

int cow(int x)
{
	int q=arr[0];
	int c=k-1;
	for( i=0;i<n-1;++i){
		if(q+x<=arr[i+1])
		{
			c--;
            q=arr[i+1];
		}
	}
	if(c<=0){
		return 1;}
	return -1;
}

void show()
{
   int l,r;

    l=0;
    r=1000000000;

    while(r-l>1)
    {
        int mid=(l+r)/2;

        if(cow(mid)==1)
        {
            l=mid;
        }
        else
        {
            r=mid;
        }
    }
    if(cow(r)==1)
    {
        cout<<r<<endl;
    }
    else
    {
        cout<<l<<endl;
    }

}

int main()
{
   int t,b;
   scanf("%d",&t);
   while(t--)
   {
       scanf("%d %d",&n,&k);

       for(i=0;i<n;i++)
       {
           scanf("%d",&arr[i]);
       }

       sort(arr,arr+n);
       show();
   }
}
