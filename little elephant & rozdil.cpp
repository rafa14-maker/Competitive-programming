#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long  arr[100005],frr[100005];
    long long n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        frr[i]=arr[i];
    }
    sort(arr,arr+n);
    if(arr[0]==arr[1])
    {
        cout<<"Still Rozdil"<<endl;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(frr[i]==arr[0])
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }
}
