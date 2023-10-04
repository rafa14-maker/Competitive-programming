#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n+5][5];
    for(int i=0;i<n;i++)cin>>arr[i][0]>>arr[i][1];
    long long sum=0;
    for(int i=0;i<n;i++)
    {
      //  cout<<i<<" "<<sum<<endl;
        if(i==0)
        {
            sum+=min(arr[i][0],arr[i][1])+1;
        }
        else
        {
            int a=arr[i-1][0],b=arr[i-1][1];
            if(a==arr[i][0]&&b==arr[i][1])continue;
            if(a==b)
            {
                 sum+=min(arr[i][0],arr[i][1])-a;
            }
            else if(a>b)
            {
                if(arr[i][1]>=a)
                {
                    sum+=min(arr[i][0],arr[i][1])-a+1;
                }
            }
            else
            {
                if(arr[i][0]>=b)
                {
                    sum+=min(arr[i][1],arr[i][0])-b+1;
                }
            }
        }
    }
    cout<<sum<<endl;
}

int main()
{
    solve();
}
