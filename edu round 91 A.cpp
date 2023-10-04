#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];

    for(int i=0;i<n;i++)
    {
        int counter=0,mn1=-1,mx=-1;
        for(int j=i-1;j>=0;j--)
        {
            if(arr[j]<arr[i])
            {
                counter++;
                mn1=j;
                break;
            }
        }

        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                counter++;
                mx=j;
                break;
            }
        }
        if(counter==2)
        {
            cout<<"YES"<<endl;
           // if(mn1>mx)swap(mn1,mx);
            cout<<mn1+1<<" "<<i+1<<" "<<mx+1<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();

    //solve();
}
