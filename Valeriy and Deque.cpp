#include<bits/stdc++.h>
using namespace std;

const int max1 = 1e5+7;

deque<long long>d;

long long arr[max1];

pair<long long,long long>ans[max1*10];

int main()
{
    long long int k,t,m,n,i,M=-1;

    cin>>n>>m;

    for(int i=0;i<n;i++)
    {
        cin>>k;
        M=max(m,k);
        d.push_back(k);
    }

    int cnt=0;

    while(d.front()!=M)
    {
        long long x=d.front();
        d.pop_front();

          long long y=d.front();
        d.pop_front();

        d.push_back(min(x,y));
        d.push_front(max(x,y));

        ans[cnt++]=make_pair(x,y);
    }

    int mk=0;

    while(!d.empty())
    {
        arr[++mk]=d.front();
        d.pop_front();
    }

    for(int i=0;i<m;i++)
    {
       cin>>k;
		if( k<=cnt ){
			cout<<ans[k-1].first<<" "<<ans[k-1].second<<endl;
		}
		else{
			long long d = k - cnt -1;
			d %= (n-1);
            cout<<arr[1]<<" "<<arr[ 2+d ]<<endl;
		}
    }
}
