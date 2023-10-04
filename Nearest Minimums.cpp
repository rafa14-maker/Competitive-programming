#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long k=1e15;

    long long arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i],k=min(k,arr[i]);

    int p=-1;
    int counter= 1e7;

  //  cout<<k<<endl;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==k&&p==-1)
        {
            p=i;
        }
        else if(arr[i]==k)
        {
           // cout<<1;
            counter=min(counter,abs(p-i));
            p=i;
        }
    }
    cout<<counter<<endl;
}
