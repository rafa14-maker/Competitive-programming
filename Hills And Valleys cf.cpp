#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n+5],frr[n+5]={0};
    for(int i=0;i<n;i++)cin>>arr[i];
    int odd=0,even=0;
    for(int i=1;i<n-1;i++)
    {
        if(i+1<n)
        {
            if(arr[i]<arr[i+1]&&arr[i]<arr[i-1])frr[i]=1,odd++;
            else if(arr[i]>arr[i+1]&&arr[i]>arr[i-1])frr[i]=2,even++;
        }
    }
    bool tr=true;
    for(int i=0;i<n;i++)
    {
        if(i+1<n&&i+2<n)
        {
            if(tr&&frr[i]==1&&frr[i+1]==2&&frr[i+2]==1)
            {
               even-=1;
               odd-=2;
               tr=false;
            }
            if(tr&&frr[i]==2&&frr[i+1]==1&&frr[i+2]==2)
            {
                even-=2;
                odd-=1;
                tr=false;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(i+2<n)
        {
            if(tr&&frr[i]==1&&frr[i+2]==1)
            {
               even-=1;
               odd-=2;
               tr=false;
            }
            if(tr&&frr[i]==2&&frr[i+2]==2)
            {
                even-=2;
                odd-=1;
                tr=false;
            }
        }
    }

     for(int i=0;i<n;i++)
    {

        {
            if(tr&&frr[i]==1)
            {
              // even-=1;
               odd-=1;
               tr=false;
            }
            if(tr&&frr[i]==2)
            {
                even-=1;
              //  odd-=1;
                tr=false;
            }
        }
    }

    cout<<odd+even<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
