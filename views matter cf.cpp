#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
   // cout<<"yes"<<endl;
  /* int n,m;
   cin>>n>>m;

   ll arr[n+5];

   for(int i=0;i<n;i++)cin>>arr[i];

   sort(arr,arr+n);
   vector<pair<ll,ll> >v;

   int cnt = 1;

   for(int i=1;i<n;i++)
   {
       if(arr[i]==arr[i-1])cnt++;
       else
       {
           v.push_back(make_pair(arr[i-1],cnt));
           cnt = 1;
       }
   }

   v.push_back(make_pair(arr[n-1],cnt));

   ll sum = 0;
   //ll dx = 0;

   for(int i =0;i<v.size();i++)
   {
       ll  a = v[i].first;
       ll b  = v[i].second;

       if(b==1)
       {
           if(i!=0)sum+=v[i-1].first;
       }
       else
       {
            if(i!=0)
            {
                if(b>=a-v[i-1].first)sum += b*(a-1);
                else
                {
                    sum += v[i-1].first + b-1;
                    sum += (b-1)*(a-1);
                }
            }
            else
            {
               if(b>=a)sum += b*(a-1);
                else
                {
                    sum += a - (b-1);
                    sum += (b-1)*(a-1);
                }
            }
       }

   }
   cout<<sum<<endl;

   */

   // i was not able to solve it

   int n,m;
   cin>>n>>m;

   ll sum = 0 , ans = 0 ;

   ll arr[n+5];

   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
       sum+=arr[i];
   }

   sort(arr,arr+n);

    ll  r=0;
	ll  prev=0;

	for(int i=0;i<n;i++)
	{
		r+=1;
		if(arr[i]>prev)
			prev++;
	}
	r+=(arr[n-1]-prev);
	ans=sum-r;

	cout << ans << endl;

}

int main()
{
  // int q;cin>>q;while(q--)solve();
   solve();
}

/*

14 12
1 2 2 2 2 6 6 6 10 10 12 12 12 12

*/

