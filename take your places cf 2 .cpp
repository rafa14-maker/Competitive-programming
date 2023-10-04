#include<bits/stdc++.h>
using namespace std;
using ll = long long;

/*
ll f(ll cnt,vector<ll>v)
{
    ll idx = 0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]%2 != cnt%2)
        {
            int k = 0;
            for(int j=i+1;j<v.size();j++)
            {
                if(v[j]%2 == cnt%2)
                {
                    k = j;
                    break;
                }
            }
            while(k>i)
            {
                idx++;
                swap(v[k],v[k-1]);
                k--;
            }
        }
        cnt++;
    }
    return idx;
}

void solve()
{
   // cout<<"yes"<<endl;

   int n;
   cin>>n;

   vector<ll>v;
   ll a=0,b=0;
   for(int i=0;i<n;i++)
   {
       ll ak;
       cin>>ak;
       v.push_back(ak);
       if(ak%2==0)a++;
       else b++;
   }

   if(abs(a-b)>1)
   {
       cout<<-1<<endl;
       return ;
   }

   ll m = min(f(2,v),f(1,v));

   cout<<m<<endl;

}*/

void solve()
{

    // I was not able to solve it

    // I seen the tutorial for it

    // Dont see the code your better than me ^___^

    		int n;
		cin>>n;
		int odd=1,even=2,on=0,en=0,ans1=0,ans2=0;
		for(int i=1;i<=n;i++){
			int a;
			cin>>a;
			if(a&1) {ans1+=abs(odd-i);ans2+=abs(even-i);on++;odd+=2;even+=2;}
			else en++;
		}
		if(on==en+1) cout<<ans1<<endl;
		else if(on+1==en) cout<<ans2<<endl;
		else if(on==en) cout<<min(ans1,ans2)<<endl;
		else cout<<-1<<endl;
}

int main()
{
   int q;cin>>q;while(q--)solve();
  // solve();
}

