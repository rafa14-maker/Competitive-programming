#include<bits/stdc++.h>
using namespace std;

int arr[]={1,2,3,4,5,6,7,8,9};

void solve()
{
    int n;
    cin>>n;
    long long k=1e17;

      for(int i=0;i<=pow(2,10);i++)
       {
        int sum=0;
        int cnt=1;
        long long kp=0;
        for(int j=10;j>=0;j--)
        {
            if(i&(1<<j))
            {
                sum+=arr[j];
                kp+=(arr[j]*cnt);
                cnt*=10;
            }
        }
        if(sum==n){
              //  cout<<kp<<endl;
           k=min(k,kp);
        }

    }
   if(k==1e17) cout<<-1<<endl;
   else cout<<k<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
