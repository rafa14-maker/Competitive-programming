#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,d;
        cin>>n>>k>>d;
        int arr[n+5];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int counter=1e9;
        if(n==d)
        {
             int flag=0;
             int frr[k+5]={0};
            for(int j=0;j<n;j++)
            {
                frr[arr[j]]++;
                }
                for(int j=1;j<=k;j++)
                {
                    if(frr[j]>0)flag++;
                }
             cout<<flag<<endl;
        }
        else{
        for(int i=0;i<=n-d;i++)
        {
            int frr[k+5]={0};
            int flag=0;
            for(int j=i;j<i+d;j++)
            {
                frr[arr[j]]++;
                }
                for(int j=1;j<=k;j++)
                {
                    if(frr[j]>0)flag++;
                }
              //  for(int i=1;i<=d;i++)cout<<frr[i]<<" ";cout<<endl;
                counter=min(counter,flag);
        }
       //if(counter!=1e9) cout<<counter<<endl;
      // else cout<<n<<endl;
           cout<<counter<<endl;
    } }
}
