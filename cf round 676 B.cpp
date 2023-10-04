#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    char arr[n+5][n+5];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)cin>>arr[i][j];
    }
    int idx=0,idx1=0;
    if(arr[1][0]=='1')idx++;
    if(arr[0][1]=='1')idx++;
    if(arr[n-1][n-2]=='0')idx++;
    if(arr[n-2][n-1]=='0')idx++;

   if(arr[1][0]=='0')idx1++;
    if(arr[0][1]=='0')idx1++;
    if(arr[n-1][n-2]=='1')idx1++;
    if(arr[n-2][n-1]=='1')idx1++;
    if(idx==0||idx1==0)cout<<0<<endl;
   else if(idx<=idx1)
    {
        cout<<idx<<endl;
             if(arr[1][0]=='1')cout<<2<<" "<<1<<endl;
    if(arr[0][1]=='1')cout<<1<<" "<<2<<endl;
    if(arr[n-1][n-2]=='0')cout<<n<<" "<<n-1<<endl;
    if(arr[n-2][n-1]=='0')cout<<n-1<<" "<<n<<endl;
    }
    else
    {
         cout<<idx1<<endl;
              if(arr[1][0]=='0')cout<<2<<" "<<1<<endl;
    if(arr[0][1]=='0')cout<<1<<" "<<2<<endl;
    if(arr[n-1][n-2]=='1')cout<<n<<" "<<n-1<<endl;
    if(arr[n-2][n-1]=='1')cout<<n-1<<" "<<n<<endl;
    }

}

int  main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
