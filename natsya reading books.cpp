#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+2];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        cin>>arr[i];
    }
    int k,ans=n;
    cin>>k;

    for(int i=0;i<n;i++)
    {
      if(arr[i]<k)ans--;

    }
    cout<<ans<<endl;
    //cout<<counter<<endl;

}
