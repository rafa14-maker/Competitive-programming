#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    int sum1=0,sum2=0,p1=0,p2=0;
    int counter=0;
    while(1)
    {
        counter++;
       // cout<<counter<<" "<<sum1<<" "<<sum2<<endl;
        if(counter%2==0)
        {
            //int p=0;
            p1=0;
            bool tr=true;
            for(int i=n-1;i>=0;i--)
            {
                if(p1>p2)break;
                p1+=arr[i];
                if(arr[i]!=0)tr=false;
                arr[i]=0;
            }
            sum2+=p1;
            if(p1<=p2)
            {
                if(tr)counter--;
                break;
            }
        }
        else
        {
           // int p=0;
           p2=0;
           bool tr=true;
            for(int i=0;i<n;i++)
            {
                if(p2>p1)break;
                p2+=arr[i];
                if(arr[i]!=0)tr=false;
                arr[i]=0;
            }
            sum1+=p2;
            if(p2<=p1)
            {
                if(tr)counter--;
                break;
            }
        }
    }
    cout<<counter<<" "<<sum1<<" "<<sum2<<endl;
}


int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        solve();
    }
}
