#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,k;
        cin>>n>>k;
        vector<long long>coin;
        long long i=1;
        while(i*k<=1e16)
        {
            coin.push_back(i*k);
            i*=k;
        }
      //  cout<<2<<endl;
        vector<long long>v;
        v.push_back(0);
        v.push_back(1);
        for(int i=0;i<coin.size();i++)
        {
            long long sum=0;
            for(int j=i;j<coin.size();j++)
            {
                sum+=coin[j];
                v.push_back(sum);
            }
        }
        sort(v.begin(),v.end());
       // for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
        map<int,int>mp;
        int flag=0;
     //   cout<<1<<endl;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a==0)continue;
            if(mp[a]==1)flag++;
            int counter=0;
            int l=0;
            int r=v.size()-1;
            while(l<=r)
            {
                int mid=(l+r)/2;
                if(v[mid]==a)
                {
                    counter++;
                    mp[a]=1;
                    break;
                }
                else if(v[mid]>a)r=mid-1;
                else l=mid+1;
            }
           // cout<<counter<<endl;
            if(counter==0)flag++;
        }
        if(flag==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
