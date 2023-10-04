#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int>v;

    for(int i=0;i<s.size();i++)
    {
        if(i+1<s.size()&&s[i]=='A'&&s[i+1]=='C')
        {
            v.push_back(i+1);
            v.push_back(i+2);
        }
    }
    sort(v.begin(),v.end());
    //for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;

    while(k--)
    {
        int a,b;
        cin>>a>>b;
        int ans1=9999999;
        int l=0,r=v.size()-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(v[mid]>=a)
            {
                ans1=min(mid,ans1);
                r=mid-1;
            }
            else l=mid+1;
        }


        int ans2=0;
        l=0,r=v.size()-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(v[mid]<=b)
            {
                ans2=max(mid,ans1);
               l=mid+1;
            }
            else r=mid-1;
        }
       // cout<<ans1<<" "<<ans2<<endl;
        if(ans1%2==1)ans1+=1;
        if(ans2%2==0)ans2-=1;

        if(ans1<ans2&&v[ans1]>=a&&v[ans2]<=b)cout<<(ans2-ans1+1)/2<<endl;
        else cout<<0<<endl;

    }
}
