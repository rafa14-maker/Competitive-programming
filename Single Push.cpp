#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        int arr[n+5];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int frr[n+5];
        for(int i=0;i<n;i++)
            cin>>frr[i];
        int l=0,r=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=frr[i])
            {
                l=i;
                break;
            }
        }
        for(int j=n-1;j>=0;j--)
        {
            if(arr[j]!=frr[j])
            {
                r=j;
                break;
            }
        }
        vector<int>v;
        for(int i=l;i<=r;i++)
        {
            int k=frr[i]-arr[i];
            v.push_back(k);
        }
        int counter=0;
        for(int i=0;i<v.size();i++)
        {
            if(i+1<v.size()&&v[i]!=v[i+1])
            {
                counter++;
                break;
            }
            if(v[i]<0)
            {
                counter++;
                break;
            }
        }
     //   cout<<l<<" "<<r<<endl;
       // for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;
        if(counter==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
