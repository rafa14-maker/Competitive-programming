#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {

        int n,max1=0;
        cin>>n;
        int arr[n+5];
        for(int i=0;i<n;i++)
        {
           cin>>arr[i];
           max1=max(arr[i],max1);
        }
        int frr[max1+5];
         for(int i=0;i<=max1;i++)
        {
           frr[i]=0;
        }
         for(int i=0;i<n;i++)
        {
           frr[arr[i]]++;
        }
        sort(frr,frr+max1+1);

        long long ans=frr[0],k=frr[0];

            for(int j=max1;j>=0;j--)
            {
                if(frr[j]==0)break;
                    if(frr[j]>=k)
                    {
                        ans+=k-1;
                        k--;
                    }
                    else
                    {
                        ans+=frr[j];
                        k=frr[j];
                    }
                    if(k<=0)break;
            }
      //  for(int i=0;i<=max1;i++)cout<<frr[i]<<" ";
        cout<<ans<<endl;
    }
}
