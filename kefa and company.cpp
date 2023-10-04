#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m;
    cin>>n>>m;
    vector<pair<long long ,long long > >v;
    for(int i=0;i<n;i++)
    {
        long long a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }

    sort(v.begin(),v.end());



  //  for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    int l=0,r=0;
	long long ans=0,sum=v[0].second;
	while(l<n&&r<n){
		if(r<l){
			r++;
			sum+=v[r].second;
		}
		if(v[r].first-v[l].first<m){
			ans=max(ans,sum);
			r++;
			sum+=v[r].second;
		}
		else{
			sum-=v[l].second;
			l++;
		}

	}

    cout<<ans<<endl;

}

