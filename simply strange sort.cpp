#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=1;i<=n;i++)cin>>arr[i];

    int cnt=0;

    for(int i=1;i<=n*n;i++)
    {
        bool tr=false;
        int idx = i%2;
        for(int j=1;j<=n;j++)
        {
            if(idx == j%2)
            {
                if(j+1<=n&&arr[j]>arr[j+1])
                {
                    tr=true;
                //    cout<<j<<endl;
                    swap(arr[j],arr[j+1]);
                }
            }
           // cout<<j<<endl;
        }
        if(tr)cnt++;
       // else break;
    }

    cout<<cnt<<endl;

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
