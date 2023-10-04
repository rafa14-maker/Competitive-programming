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
        multiset<int>s;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            arr[i]=a;
            s.insert(a);
        }

        int ans=0;

        for(int i=0;i<n-1;i++)
        {
            int sum=arr[i];
            for(int j=i+1;j<n;j++)
            {
                sum+=arr[j];
                auto it=s.find(sum);
                while(it!=s.end())
                {
                    ++ans;
                    s.erase(it);
                    it=s.find(sum);
                }
            }
        }
        cout<<ans<<endl;

    }
}
