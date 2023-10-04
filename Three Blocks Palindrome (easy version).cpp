#include<bits/stdc++.h>
using namespace std;

using ll=long long;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        int arr[n+5];
        vector<ll>adj[250];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            int p=arr[i];
            adj[p].push_back(i+1);
        }
        long long sum=0;
       for(int i=1;i<=26;i++)
       {
           ll k =adj[i].size();
           sum=max(sum,k);
           for(int j=i+1;j<=26;j++)
           {
               if(adj[i].size()==0||adj[j].size()==0)continue;
               ll p=adj[i].size()-1;
               ll q=adj[j].size()-1;
                ll mx=max(adj[i][0],adj[j][0]);
                ll mn=min(adj[i][p],adj[j][q]);

                ll a1=p-(mx-mn+1);
                ll b1=q-(mx-mn+1);

                cout<<mx<<" "<<mn<<endl;
                if(mx<=mn)sum=max(sum,mn-mx+1+max(a1,b1));
           }
       }
        cout<<sum<<"\n";
    }
}

