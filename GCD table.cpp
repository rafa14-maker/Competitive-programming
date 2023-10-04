#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int m = n*n;
    int arr[m+5];
    for(int i=0;i<m;i++)cin>>arr[i];
    sort(arr,arr+m);
    int p = m - n;
    p/=2;
    for(int i=0;i<m-1;i++)
    {
        if(arr[i]!=-1&& arr[i]==arr[i+1])
        {
            p--;
            arr[i] = -1;
            arr[i+1] = -1;
            if(p==0)break;
        }
    }

    for(int i=0;i<m;i++)if(arr[i]!=-1)cout<<arr[i]<<" ";
    cout<<endl;

}

int main()
{
   solve();
}
