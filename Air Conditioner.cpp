#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,t;
        cin>>n>>t;
        long long arr[n+5],l[n+5],r[n+5];
        for(int i=0;i<n;i++)cin>>arr[i]>>l[i]>>r[i];

        vector<long long>v;

        for(int i=0;i<n-1;i++)
        {
            long long k=min(abs(l[i]-l[i+1]),abs(l[i]-r[i+1]));
            k=min(k,abs(r[i]-r[i+1]));
            k=min(k,abs(r[i]-l[i+1]));
            v.push_back(k);
        }

        int flag=0;
        for(int i=0;i<n-1;i++)
        {
            if(i==0)
            {
                if(arr[i]<v[i])
                {
                    flag++;
                    break;
                }
            }
            int k=abs(arr[i]-arr[i+1]);
            if(k<v[i])
            {
                flag++;
                break;
            }
        }
        if(flag==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}
